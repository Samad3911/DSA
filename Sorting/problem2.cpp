// Find All Numbers Disappeared in an Array
// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.
//Google interview question

#include <iostream>
#include <vector>

using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
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
            ans.push_back(index + 1);
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

    auto ans = findDisappearedNumbers(nums);

    for(int x : ans){
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;
    return 0;
} 