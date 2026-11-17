#include <bits/stdc++.h>
using namespace std;

struct data{
    int data;
    struct node *prev;
    struct node *next;
}

node *Front, *Rear;


node *GetNode(){
    node *p;
    p = new node;
    return p;
}
void insfront(int x){
    node *p;
    p = GetNode();
    p->data = x;
    p->prev = NULL;
    p->next = front;
    if(front!=NULL){
        Front->prev = p;
    }
    else{
        Rear = p;
    }
    Front = p;
}

void insrear(int x){
    node *p;
    p = GetNode();
    p->data = x;
    
}