#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
#define STACKSIZE 6

struct Stack{
    char item[STACKSIZE];
    int Top;
};

Stack S;
void Initialize(){
    S.Top = -1;
}

void Push(char x){
    if(S.Top== STACKSIZE-1){
        cout<<"Stack OverFlow"<<endl;
        exit(1);
    }
    S.Top++;
    S.item[S.Top]=x;
}

char Pop(){
    if(S.Top == -1){
        cout<<"Stack UnderFlow"<<endl;
        return '\0';
    }
    char x = S.item[S.Top];
    S.Top--;
    return x;
}

char StackTop(){
    char x= S.item[S.Top];
    return x;
}

int main(){
    Initialize();
    Push('A');
    Push('B');
    Push('C');
    char x = Pop();
    cout<<x;
    x = StackTop();
    cout<<x;
    Push('D');
}