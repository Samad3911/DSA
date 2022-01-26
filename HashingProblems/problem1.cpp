//Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

#include <iostream>
#include <vector>
#include <set>


using namespace std;

int longestConsecutive(vector<int>& nums) {
        set<int> temp;
        for(int num : nums){
            temp.insert(num);
        }
        
        int longestSequence = 0;
        for(int num : temp){
            if(!temp.count(num - 1)){            //First we will find the start of the sequence
                int currentNum = num;
                int currentSequence = 1;
                while(temp.count(currentNum+1)){
                    currentNum++;
                    currentSequence++;
                }
                
                longestSequence = max(currentSequence, longestSequence);
            }
        }
        
        return longestSequence;
    }

int main(){
    vector<int> nums {100, 4, 200, 1, 3, 2};

    cout<<"Length of longest consecutive sequence is: "<<longestConsecutive(nums)<<endl;


    return 0;
}