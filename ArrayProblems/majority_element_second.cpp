//Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

#include <iostream>
#include <vector>

using namespace std;

vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int count1 = 0, count2 = 0, element1 = 0, element2 = 0;
        for(int num : nums){
            if(element1 == num)
                count1++;
            else if(element2 == num)
                count2++;
            else if(count1 == 0){
                element1 = num;
                count1 = 1;
            }
            else if(count2 == 0){
                element2 = num;
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }
        
        int countA = 0, countB = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == element1)
                countA++;
            else if(nums[i] == element2)
                countB++;
        }
        if(countA > nums.size()/3)
            ans.push_back(element1);
        if(countB > nums.size()/3)
            ans.push_back(element2);
        
        return ans;
    }

int main(){
    vector<int> nums { 2, 2, 1, 1, 1, 2, 2};
    vector<int> ans = majorityElement(nums);
    cout<<"Majority elements are:\n";
    for(int num : ans){
        cout<<num<<"\n";
    }
    return 0;
}