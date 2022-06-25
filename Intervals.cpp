#include<bits/stdc++.h>

using namespace std;

class Interval{
    int from, to, dataSize;
    string rawData;
    vector<string> data;

    public:
        Interval(string str){
            this->rawData = str + ",";
            this->from = getInterval();
            this->to = getInterval();
            storeData();
        }

        int getInterval(){  //Extract Number From The Data
            int i, strLen = rawData.length();
            
            for(i = 0;i<strLen; i++){
                if(rawData[i] == ',')
                    break;
            }

            int num = getNum(rawData.substr(0, i));
            rawData = rawData.substr(++i, strLen-i);    //Remove Unwanted Data
            return num;
        }
        int getNum(string numStr){      //Generate Number From Given String
            int i, strLen = numStr.length();
            long long int num = 0;
            for(i = 0;i<strLen;i++){
                int tempNum = numStr[i]-48;

                num = (num * 10) + tempNum;
            }
            return num;
        }

        void storeData(){   //Store The Data of the Interval
            int strLen = rawData.length();
            int prevInd = 0;
            for(int i = 0;i<strLen;i++){
                if(rawData[i] == ','){
                    int subLen = abs(i-prevInd);
                    subLen = subLen == 0 ? 1 : subLen;
                    string extracted_data = rawData.substr(prevInd, subLen);
                    data.push_back(extracted_data);
                    prevInd = i+1;
                }
            }
        }
};

class PrioritizedData {
    public:
        vector<Interval*> Ilist;
        int size = 0;

        PrioritizedData(int capacity){
            Ilist.reserve(capacity);
        }
        PrioritizedData(){}

        //Get Indices
        int getLeftChildIndex(int parentIndex){
            int leftChildIndex = (2 * parentIndex) + 1; //2 * pIndex + 1;
            return leftChildIndex;
        }

        int getRightChildIndex(int parentIndex) {
            int rightChildIndex = (2 * parentIndex) + 2; //2 * pIndex + 2;
            return rightChildIndex;
        }

        int getParentIndex(int childIndex) {
            int parentIndex = (childIndex - 1) / 2;
            return parentIndex;
        }

        //Check if Indices Exist
        bool hasLeftChild(int parentIndex) {
            bool hasLeftChild = ((2 * parentIndex) + 1) < size;
            return hasLeftChild;
        }

        bool hasRightChild(int parentIndex) {
            bool hasRightChild = ((2 * parentIndex) + 2) < size;
            return hasRightChild;
        }

        bool hasParent(int childIndex) {
            bool hasParent = ((child - 1) / 2) >= 0;
            return hasParent;
        }
        
        //Get Nodes
        Interval* leftChild(int parentIndex) {
            Interval* obj = Ilist[getLeftChildIndex(parentIndex)];
            return obj;
        }
        
        Interval* rightChild(int parentIndex) {
            Interval* obj = Ilist[getRightChildIndex(parentIndex)];
            return obj;
        }

        Interval* parent(int childIndex) {
            Interval* obj = Ilist[getParentIndex(childIndex)];
            return obj;
        }

        void swap(int nodeOneIndex, int nodeTwoIndex) {
            Interval* temp = Ilist[nodeOneIndex];
            Ilist[nodeOneIndex] = Ilist[nodeTwoIndex];
            Ilist[nodeTwoIndex] = temp;
        }


        Interval* peek() {
            if(size == 0){
                cout<<"Empty!\n";
                return;
            }
            return Ilist[0];
        }
        void poll(Interal* node){
            if(size == 0){
                cout<<"Empty!\n";
                return;
            }
            Interval item = Ilist[0];
            Ilist[0] = Ilist[size-1];
            size--;
            heapifyDown();
            return item; 
        }

        void insert(Interval* node){
            Ilist[size] = node;
            size++;
            heapifyUp();
        }

        void heapifyUp() {
            int index = size - 1;

            while(hasParent(index) && parent(index)->from > Ilist[index]->from){
                swap(getParentIndex(index), index);
            }
        }

}


int main(){

    int n, i;
    cin>>n;
    for(i = 0;i<n;i++){
        string str;
        cin>>str;
        Interval obj(str);
    }

    return 0;
}
