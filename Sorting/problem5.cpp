// Set Mismatch
//You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

//You are given an integer array nums representing the data status of this set after the error.

//Find the number that occurs twice and the number that is missing and return them in the form of an array.

#include <iostream>
#include <vector>

using namespace std;

vector<int> findMissingAndDuplicates(vector<int>& nums) {
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
            ans.push_back(index + 1);
            return ans;
        }
    }

    return {-1, -1};
}


int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(4);

    auto ans = findMissingAndDuplicates(nums);

    for(int x : ans){
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;
    return 0;
} 