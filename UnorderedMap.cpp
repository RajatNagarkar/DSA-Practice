#include<bits/stdc++.h>

using namespace std;

class Dat{
    public:
        int roll;
        int age;
        long long int num;

    Dat(int, int, long long int);
};
Dat::Dat(int r, int a, long long int n){
    this->roll = r;
    this->age = a;
    this->num = n;
}

int main(){
    map<string, Dat*> umap;
    Dat *d = new Dat(37, 21, 9890098000900);
    umap["rajat"] = d;
    d->roll = 43;
    umap["sagar"] = d;
    d->roll = 36;
    umap["priyesh"] = d;

    
    while(1){
        string str;
        cin>>str;
        cout<<umap[str]->roll<<" "<<umap[str]->age<<" "<<umap[str]->num<<"\n";
    }
}