#include <bits/stdc++.h>
using namespace std;

class MyStack {
    vector<char> item;
    int top;

public:
    MyStack(int s) {
        item.resize(s);
        top = -1;
    }

    void Push(char x) {
        top++;
        item[top] = x;
    }

    char Pop() {
        char x = item[top];
        top--;
        return x;
    }

    char stacktop() {
        return item[top];
    }

    bool isempty() {
        if (top == -1)
            return true;
        else
            return false;
    }
};

bool prcd(char a, char b) {

    if(a == '(' || b == ')'){
        return false;
    }
    if(b == ')'){
        return true;
    }

    if (a == '^' || a == '*' || a == '/' || a == '%') {
        if (b == '^')
            return false;
        else
            return true;
    }

    else if (a == '+' || a == '-') {
        if (b == '+' || b == '-')
            return true;
        else
            return false;
    }

    return false;
}

int main() {

    string infix;
    cin >> infix;

    MyStack stk(20);

    int i = 0;
    string prefix = "";

    while (i < infix.size()) {

        char symbol = infix[i];
        i++;

        if (symbol >= 'a' && symbol <= 'z') {
             prefix = prefix + symbol;
        }

        else {
            while (!stk.isempty() && prcd(stk.stacktop(), symbol)) {

                char x = stk.Pop();
                prefix = prefix + x;
            }

            stk.Push(symbol);
        }
    }

    while (!stk.isempty()) {

        char x = stk.Pop();
        prefix = prefix + x;
    }

    cout << prefix << endl;

    return 0;
    
}