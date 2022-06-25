#include<bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> n;
        int size = nums.size();
        vector<int> ans;
        for(int i =0;i<size;i++){
            if(n.find(target - nums[i]) != n.end()){
                cout<<n[target - nums[i]]<<" "<<i<<endl;
                ans.push_back(n[target-nums[i]]);
                ans.push_back(i);
                break;
            } else {
                n[nums[i]] = i;
            }
        }

        return ans;
    }

int main(){

    int n;
    cin>>n;

    vector<int> nums;
    int temp;
    for(int i = 0;i<n;i++){
        cin>>temp;
        nums.push_back(temp);
    }

    cin>>n;
    nums = twoSum(nums,n);
    for(int i = 0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}