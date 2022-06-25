#include<bits/stdc++.h>

using namespace std;

vector<int> sortedIs(vector<int> inputList, int n)
{   
    unsigned num = n;
    sort(inputList.begin(), inputList.begin()+n);
    sort(inputList.begin()+n, inputList.end(), greater<int>());

    answer = inputList;

    return answer;

}


int main(){

    vector<int> v1 = {11, 7,5,10,46,23,16,8};
    vector<int> v2 = sortedIs(v1, 3);

    for(auto i: v2)
        cout<<i<<" ";
    return 0;
}