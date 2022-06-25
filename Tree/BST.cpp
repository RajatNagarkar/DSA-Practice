#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data = 0;
    
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inorder(Node* root) {
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* insert(Node* root, int key){
    
    if(root==NULL){
        return new Node(key);
    }
    if(key < root->data){
        root->left = insert(root->left, key);
    } else {
        root->right = insert(root->right, key);
    }
    return root;
}

int main(){

    vector<int> v = {7,2,3,4,6,9,8,11};
    Node* root = NULL;
    root = insert(root, 5);

    // cout<<root->data;
    for(auto i : v)
        insert(root, i);
    cout<<endl;
    inorder(root);
    return 0;
}