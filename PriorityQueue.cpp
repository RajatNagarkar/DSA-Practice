#include<bits/stdc++.h>

using namespace std;

template <typename T>
class PriorityQueue {
    public:
        vector<T> pq;
        int n = 0;
        //Indices
        //Get Left CHild Index
        int getLeftChildIndex(int i) {
            int leftChildIndex = (i * 2) + 1;
            return leftChildIndex;
        }

        //Get Right CHild Index
        int getRightChildIndex(int i) {
            int rightChildIndex = (i * 2) + 2;

            return rightChildIndex;
        }
        
        //Get Parent Index 
        int getParentIndex(int i){
            int parentIndex = (i-1) / 2;
            return parentIndex;
        }

        //Check Left Child
        bool hasLeftChild(int i){
            bool hasLeftChild = (i * 2) + 1 < n;
            return hasLeftChild;
        }

        //Check Right Child
        bool hasRightChild(int i){
            bool hasLeftChild = (i * 2) + 2 < n;
            return hasLeftChild;
        }

        //Check Parent
        bool hasParent(int i) {
            bool hasParent = ((i - 1) / 2) >= 0;
            return hasParent;
        }

        //Get Values

        //Get Left Child
        T left(int ind){
            return pq[getLeftChildIndex(ind)];
        }

        //Get Right Child
        T right(int ind) {
            return pq[getRightChildIndex(ind)];
        }

        //Get Parent
        T parent(int ind) {
            return pq[getParentIndex(ind)];
        }

        void swap(int ind1, int ind2) {
            std::swap(pq[ind1], pq[ind2]);
        }

        //POP
        void pop() {
            T item = pq[0];
            pq[0] = pq[n-1];
            heapifyDown();
            n--;
        }

        //Peek
        T top() {
            return pq[0];
        }

        //Add
        void push(T val) {
            pq.push_back(val);
            n++; // 10
            heapifyUp();
        } 
        //Heapify Up
        void heapifyUp() {
            int ind = n-1; // 10 - 1 = 9

            while(hasParent(ind) && parent(ind) < pq[ind]) {
                this->swap(getParentIndex(ind), ind);
                ind = getParentIndex(ind);
            }
        }

        void heapifyDown() {
            int ind = 0;
            while(hasLeftChild(ind)){
                int greatChildIndex = getLeftChildIndex(ind);

                if(hasRightChild(ind) && right(ind) > left(ind)){
                    greatChildIndex = getRightChildIndex(ind);
                }

                if(pq[ind] > pq[greatChildIndex]) {
                    break;
                } else {
                    this->swap(ind, greatChildIndex);
                }
                ind = greatChildIndex;
            }
        }

        bool empty(){
            return n == 0;
        }
};

int main(){

    int n;

    cin>>n;
    vector<string> v(n);
    PriorityQueue<string> obj;
    PriorityQueue<float> fObj;
    for(int i = 0;i<n;i++) {
        cin>>v[i];
        obj.push(v[i]);
    }
    while(!obj.empty()){
        cout<<obj.top()<<" ";
        obj.pop();
    }
    return 0;
}