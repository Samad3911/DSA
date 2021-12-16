// Find All Duplicate Numbers in an Array
//Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.
//Amazon interview question

#include <iostream>
#include <vector>

using namespace std;

vector<int> findAllDuplicates(vector<int>& nums) {
    vector<int> ans;
    int i =0;
    while(i < nums.size()){
        int correctIndex = nums[i] - 1;
        if(nums[i] != nums[correctIndex]){
            int temp = nums[correctIndex];
            nums[correctIndex] = nums[i];
            nums[i] = temp;
        }
        else{
            i++;
        }
    }

    for(int index = 0;index < nums.size(); index++){
        if(nums[index] != index + 1){
            ans.push_back(nums[index]);
        }
    }

    return ans;
}


int main(){
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(8);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);

    auto ans = findAllDuplicates(nums);

    for(int x : ans){
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;
    return 0;
} 