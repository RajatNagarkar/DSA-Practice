#include<bits/stdc++.h>

using namespace std;

template<typename T>
class GraphNode{
    T data;
    bool visited;
    vector<GraphNode*> l;

    public:
        GraphNode(T val){
            data = val;
            visited = false;
            l = new vector<GraphNode*>;
        }
};

int main(){

    

    return 0;
}