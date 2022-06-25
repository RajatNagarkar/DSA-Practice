#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n, i, order;
    cin>>n;
    vector<int> orderList;

    orderList.reserve(n);

    for(i = 0;i<n;i++){
        cin>>order;

        int sum = 0, count = 0;
        while(order){
            int rem = order % 10;
            order /= 10;
            sum += rem;
        }

        orderList.push_back(sum);
    }

    for(auto i = orderList.begin();i != orderList.end();++i){
        cout<<*i<<" ";
    }
    cout<<"\n";
    
    return 0;
}