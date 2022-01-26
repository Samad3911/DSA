//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

vector<int> two_Sum(vector<int>& nums, int target){
    vector<int> ans;
    unordered_map<int, int> mpp;
    for(int i=0;i<nums.size();i++){
        if(mpp.find(target - nums[i]) != mpp.end()){
            ans.push_back(mpp[target - nums[i]]);
            ans.push_back(i);
            return ans;
        }
        mpp[nums[i]] = i;
    }

    return ans;
    
}

int main(){
    vector<int> nums {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = two_Sum(nums, target);

    cout<<"Elements found at index: "<<ans[0]<<" and at index: "<<ans[1]<<endl;


    return 0;
}