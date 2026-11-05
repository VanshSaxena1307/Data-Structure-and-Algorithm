#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *insertHead(Node *head, int val)
{
    Node *temp = new Node(val, head);
    return temp;
}

Node *insertLast(Node *head, int val)
{
    if (head == NULL)
    {
        return new Node(val, head);
    }
    Node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node *InsertatKth(Node *head, int val, int k)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new Node(val);
        }
        else
        {
            return NULL;
        }
    }

    if( k==1){
        Node*temp = new Node(val,head);
        return temp;
    }

    int cnt=0;
    Node* temp = head;
    while(temp){
        cnt++;
        if(cnt == k-1){
            Node* x = new Node(val);
            x->next = temp->next;
            temp->next = x;
            return head;
        }
        temp = temp->next;
    }
}

Node *afterTarget(Node *head, int val, int target)
{
    // if (head == NULL)
    // {
    //     if (k == 1)
    //     {
    //         return new Node(val);
    //     }
    //     else
    //     {
    //         return NULL;
    //     }
    // }

    // if( k==1){
    //     Node*temp = new Node(val,head);
    //     return temp;
    // }

    
    Node* temp = head;
    while(temp){
        if(temp->data == target){
            Node* x = new Node(val);
            x->next = temp->next;
            temp->next = x;
            return head;
        }
        temp = temp->next;
    }
    return head;
}


int main()
{
    vector<int> arr = {2, 5, 8, 7};
    Node *head = convertArr2LL(arr);
    // head = insertHead(head,100);
    // head = insertLast(head, 100);
    // head = InsertatKth(head, 100,2);
    head = afterTarget(head, 100,2);
    print(head);
}