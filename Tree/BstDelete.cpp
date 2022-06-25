#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data = 0;
    Node *left, *right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int val) {
    if(root == NULL)
        return new Node(val);

    if(val < root->data){
        root->left = insert(root->left, val);
    }
    else {
        root->right = insert(root->right, val);
    }
    return root;
}

Node* inorderSucc(Node* root){
    Node* curr = root;
    while(curr && curr->left != NULL)
        curr = curr->left;
    return curr;
}

Node* deleteNode(Node* root, int data) {
    if(root == NULL){
        cout<<"Value does not exist";
        return root;
    }
    if(data < root->data){
        root->left = deleteNode(root->left, data);
    } else if(data > root->data){
        root->right = deleteNode(root->right, data);
    }
    else {
        if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        } else if(root->left = NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        } 
        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorder(Node* root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){

    Node* root = NULL;
    root = insert(root, 20);
    insert(root, 8);
    insert(root, 12);
    insert(root, 10);
    insert(root, 4);
    insert(root, 14);


    inorder(root);
    deleteNode(root, 14);
    cout<<"\n";
    inorder(root);
    deleteNode(root, 10);
    cout<<"\n";
    inorder(root);
    return 0;
}