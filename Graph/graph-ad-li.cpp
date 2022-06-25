#include<bits/stdc++.h>

using namespace std;

class Graph{
    int V;
    vector<int> *l;
    public:
        Graph(int v){
            this->V = v;
            l = new vector<int>[v];
        }

        void addEdge(int x ,int y){
            l[x].push_back(y);
            l[y].push_back(x);
        }

        void printGraph(){
            for(int i = 0;i<V;i++){
                cout<<"Vertex "<<i<<"->";
                for(auto &nbr : l[i]){
                    cout<<nbr<<" ";
                }
                cout<<endl;
            }
        }
};

int main(){
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    g.addEdge(1, 2);
    g.printGraph();
    return 0;
}