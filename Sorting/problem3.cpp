//Find the missing number
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
//There is only one repeated number in nums, return this repeated number.
//Amazon/Microsoft Interview Question

#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int>& nums) {
    int i = 0;
    while(i < nums.size()){
        if(nums[i] != i + 1){
            int correct = nums[i] - 1;
            if(nums[i] != nums[correct]){
                int temp = nums[i];
                nums[i] = nums[correct];
                nums[correct] = nums[i];
            }
            else{
                return nums[i];
            }
        }
        else{
            i++;
        }
    }
    return -1;
}

int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(2);
    nums.push_back(2);

    std::cout<<"Duplicate number is: "<<findDuplicate(nums)<<std::endl;
    return 0;
}