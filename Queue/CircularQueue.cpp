#include<bits/stdc++.h>

using namespace std;

class CircularQueue
{
    public:
    int front, rear, n;
    int q[100];
    
    CircularQueue(int size) {
        front = rear = -1;
        n = size;
    }
    void push(int x) {
        if(isFull()) {
            cout << "Queue is full.\n" << endl;
            return;
        } else if (empty()){
            front++;
        }
        rear = (rear+1) % n;
        q[rear] = x;
    }

    void pop() {
        if(empty()) {
            cout<<"Queues is Empty.\n";
            return;
        } else if(front == rear) {
            front = rear = -1;
        }
        front = (front + 1) %n;
    }
    int frontEle() {
        if(empty()) {
            cout<<"Queue is Empty.\n";
            return -1;
        }
        return q[front];
    }

    bool empty() {
        return front == -1;
    }
    bool isFull() {
        return (rear+1) % n == front;
    }
};


int main(){
    int n;
    cout<<"Enter size of queue: ";
    cin>>n;
    char ch;
    CircularQueue cq(n);

    cout<<"1. 'P' to push element.\n";
    cout<<"2. 'R' to pop element.\n";
    cout<<"3. 'F' to get element.\n";
    cout<<"4. 'E' to push element.\n";

    while(ch != 'e' || ch == 'E') {
        cout<<"Enter choice: ";
        cin>>ch;
        if(ch == 'p' || ch == 'P') {
            int x;
            cout<<"Enter element to be pushed: ";cin>>x;
            cq.push(x);
        } else if(ch == 'r' || ch == 'R') {
            int x = cq.frontEle();
            if(x != -1) {
                cq.pop();
                cout<<x<<" Popped\n";
            }
        } else if(ch == 'f' || ch == 'F') {
            if(cq.frontEle() != -1) {
                cout<<"Element is: "<<cq.frontEle()<<"\n";
            }
        }

    }
    return 0;

}

