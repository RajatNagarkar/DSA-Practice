#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node() {
            this->data = 0;
            this->next = NULL;
        }

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

class List {
    public:
        Node* head;
        List() {
            this->head = NULL;
        }
        void insertNode(int);
        void printList();
        void deleteNode();
};

void List::insertNode(int data) {
    Node* newNode = new Node(data);

    if(head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void List::printList() {
    Node* temp = head;

    if(head == NULL){
        cout<<"List is empty.\n";
    }

    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void List::deleteNode() {
    Node* temp = head;
    while(temp->next != NULL){
        if(temp->data == temp->next->data){
            temp->next = temp->next->next;
        }
        else{
            temp = temp->next;
        }
    }
}

int main(){
    List list;

    int n, i;
    cin>>n;
    int num;
    for(i = 0;i<n;i++){
        cin>>num;

        list.insertNode(num);
    }

    list.deleteNode();
    list.printList();

    return 0;
}