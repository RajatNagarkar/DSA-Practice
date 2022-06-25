#include<bits/stdc++.h>

using namespace std;

int maxEnergy(vector<int> ener)
{
    unsigned int i, j, answer = 0;
    signed int max = INT_MIN;
    unsigned int n = ener.size();

    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            int prod = ener[i]*ener[j];
            
            if(max < prod)
            {
                max = prod;
                answer = ener[i] + ener[j];
            }
        }
    }
    return answer;
}

int main(){

    int n = 7;
    vector<int> v1 = {9, -3, 8, -6, -7, 8, 10};
    cout<<maxEnergy(v1)<<endl;
    return 0;
}