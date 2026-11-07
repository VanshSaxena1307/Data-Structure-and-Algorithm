// ----------------DOUBLY LINKED LIST-----------------

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node* back;

public:
    Node(int data1, Node *next1, Node* back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i= 1; i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* deleteHead(Node* head){
    if(head == NULL || head->next ==  NULL)return NULL;
    Node* temp = head;
    head = head->next;

    head->back = nullptr;
    temp->next = nullptr;

    delete temp;
    return head;
}

Node* deletetail(Node* head){
    if(head == NULL || head ->next == NULL)return NULL;
    Node*temp = head;
    while(temp->next){
        temp= temp->next;
    }
    Node* newTail = temp->back;
    newTail->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;

}

int main(){
    vector<int> arr = {2,5,8,7};
    Node* head = convertArr2DLL(arr);
    // head = deleteHead(head);
    head = deletetail(head);
    print(head);
    return 0;
}