#include<bits/stdc++.h>

using namespace std;

vector<int> prodDelivery(vector<int> orderID) {
    vector<int> answer;
    
    for(int i = 0; i < orderID.size(); i++) {
        int sum = 0;
        int temp = orderID[i];
        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        answer.push_back(sum);
    }


    return answer;
}


int main(){

    vector<int> orderID = {123,456,789};

    for(auto i : prodDelivery(orderID)) {
        cout << i << " ";
    }

    return 0;
}