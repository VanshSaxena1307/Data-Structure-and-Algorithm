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

// Calculate the Height of Tree using Method 1 by calculating number the maximum distance between from root to leaf node

int height(Node *root){
    if(root == NULL){
        return -1;
    }
    int leftHt = height(root->left);
    int rightHt = height(root->right);

    return max(leftHt, rightHt) + 1;
}

// Count Number of Nodes present in a Binary Tree

int count(Node *root){
    if(root==NULL){
        return 0;
    }
    return 1 + count(root->left) + count(root->right);
}

// Calculate the sum of nodes

int sum_nodes(Node *root){
    if(root == NULL){
        return 0;
    }
    return root->data + sum_nodes(root->left) + sum_nodes(root->right);
}

//count the number of leaf node(nodes with 0 subtrees)

int count_leaf_nodes(Node *root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 1;
    }
    return count_leaf_nodes(root->left) + count_leaf_nodes(root->right);
}

//count of nodes with 2 child

int count_n2(Node *root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 0;
    }
    if(root->left == NULL || root->right == NULL){
        return count_n2(root->left) + count_n2(root->right);
    }
    return 1 + count_n2(root->left) + count_n2(root->right);
}

//count of nodes with 1 child

int count_n1(Node *root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 0;
    }
    if(root->left == NULL || root->right == NULL){
        return 1 + count_n1(root->left) + count_n1(root->right);
    }
    return count_n1(root->left) + count_n1(root->right);
}

// Calculate sum of left leaves

int sum_left_leaves(Node* root){
    if(root == NULL){
        return 0;
    }
    
    int sum = 0;
    if(root->left!=NULL && root->left->left == NULL && root->left->right == NULL){
        sum += root->left->data;
    }
    sum += sum_left_leaves(root->left);
    sum += sum_left_leaves(root->right);
    return sum;
}
 
int main(){
    vector<int>preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node *root = buildTree(preOrder); 
    // cout<<"Height: "<<height(root)<<endl;
    // cout<<"Number of Nodes: "<<count(root)<<endl;
    // cout<<"Sum of Nodes: "<<sum_nodes(root)<<endl;
    // cout<<"Sum of Left Nodes: "<<sum_left_leaves(root)<<endl;
    // cout<<"Count of Leaf Nodes: "<<count_leaf_nodes(root)<<endl;
    // cout<<"Count of Nodes with 2 child: "<<count_n2(root)<<endl;
    cout<<"Count of Nodes with 1 child: "<<count_n1(root)<<endl;
    return 0;

}