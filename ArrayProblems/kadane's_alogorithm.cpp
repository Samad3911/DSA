//Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

//A subarray is a contiguous part of an array.

#include <iostream>
#include <vector>

using namespace std;

int maxSubArray(vector<int>& nums) {
        int sum = 0, maximum = nums[0];
        for(int num : nums){
            sum += num;
            maximum = max(maximum, sum);
            if(sum < 0)
                sum = 0;
        }
        
        return maximum;
}

int main(){
    vector<int> nums { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<"Maximum subarray sum is: "<<maxSubArray(nums)<<endl;
    return 0;
}