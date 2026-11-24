#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int val){
            data = val;
            left = right = NULL;
        }
};

static int idx = -1;
Node *buildTree(vector<int> preOrder){
    idx++;

    if(preOrder[idx] == -1){
        return NULL;
    }

    Node *root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder);
    root->right = buildTree(preOrder);

    return root;
}

//If the tree is strictly Binary tree or not?? (Condition for strictly Binary Tree : Child Node should only have only 0 or 2 nodes)

bool strict_binary_tree(Node *root){
    if(root == NULL){
        return true;
    }

    if((root->left == NULL && root->right != NULL) ||
       (root->left != NULL && root->right == NULL)){
        return false;
    }

    return strict_binary_tree(root->left) &&
           strict_binary_tree(root->right);
}

int main(){
    vector<int>preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node *root = buildTree(preOrder); 

    cout<<strict_binary_tree(root)<<endl;
    
    return 0;
}