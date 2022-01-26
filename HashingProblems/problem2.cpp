//Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.

#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

int maxLen(vector<int>&A, int n)
    {   
        int maximum = 0;
        int sum = 0;
        unordered_map<int, int> mpp;
        for(int i=0;i<n;i++){
            sum += A[i];
            if(sum == 0){
                maximum = i + 1;
            }
            else{
                if(mpp.find(sum) != mpp.end()){
                    maximum = max(maximum, i - mpp[sum]);
                }
                else{
                    mpp[sum] = i;
                }
            }
        }
        
        return maximum;
    }

int main(){
    vector<int> nums {15,-2,2,-8,1,7,10,23};

    cout<<"Length of largest subarray with zero sum is: "<<maxLen(nums, nums.size())<<endl;


    return 0;
}