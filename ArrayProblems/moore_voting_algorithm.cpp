//Given an array nums of size n, return the majority element.

//The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int>& nums) {
        int count = 0, element = 0;
        for(int num : nums){
            if(count == 0)
                element = num;
            if(num == element)
                count += 1;
            else
                count -=1;
        }
        
        return element;
}

int main(){
    vector<int> nums { 2, 2, 1, 1, 1, 2, 2};
    cout<<"Majority element is: "<<majorityElement(nums)<<"\n";
    return 0;
}