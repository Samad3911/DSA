// First Missing Positive
// Given an unsorted integer array nums, return the smallest missing positive integer.

// You must implement an algorithm that runs in O(n) time and uses constant extra space.
//Amazon Interview Question

#include <iostream>
#include <vector>

using namespace std;

int firstMissingPositive(vector<int>& nums) {
    int i=0;
    while(i<nums.size()){
        int correctIndex = nums[i] - 1;
        if(nums[i] > 0 && nums[i] <= nums.size() && nums[i] != nums[correctIndex]){
            int temp = nums[i];
            nums[i] = nums[correctIndex];
            nums[correctIndex] = temp;
        }
        else{
            i++;
        }
    }

    for(int i=0;i<nums.size();i++){
        if(nums[i] != i + 1){
            return i+1;
        }
    }

    return nums.size()+1;
}

int main(){
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(-1);
    nums.push_back(1);
    std::cout<<"First missing positive number is: "<<firstMissingPositive(nums)<<std::endl;
    return 0;
}