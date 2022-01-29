//Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

//Notice that the solution set must not contain duplicate triplets.


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0;i < n - 2;i++){
            int low = i + 1,high = n - 1, sum = 0 - nums[i];
            if(i == 0 || (i > 0 && nums[i] != nums[i-1])){
                while(low < high){
                    if(nums[low] + nums[high] == sum){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        ans.push_back(temp);
                        while(low < high && nums[low] == nums[low + 1])low++;
                        while(low < high && nums[high] == nums[high - 1])high--;
                        low++;
                        high--;
                    }
                    else if(nums[low] + nums[high] < sum){
                        low++;
                    }
                    else{
                        high--;
                    }
                }
            }
        }
        
        return ans;
    }

int main(){
    vector<int> nums{-1,0,1,2,-1,-4};
    vector<vector<int>> ans = threeSum(nums);
    cout<<"The triplets having sum as 0 are: "<<endl;
    for(vector<int> temp : ans){
        cout<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<endl;
    }

    return 0;
}