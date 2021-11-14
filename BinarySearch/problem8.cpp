//Google interview questions
//Find split sub arrays largest sum

#include <iostream>

using namespace std;

int findSplitArraysLargestSum(int num[], int m, int size){
    int start = 0;
    int end = 0;
    for(int i=0; i < size; i++){
        start=std::max(start, num[i]);
        end += num[i];
    }

    while(start < end){
        int mid = start + (end - start)/2;
        int sum = 0, pieces = 1;
        for(int i=0; i< size; i++){
            if(sum + num[i] > mid){
                sum = num[i];
                pieces++;
            }
            else{
                sum += num[i];
            }
        }

        if(pieces <= m){
            end = mid;
        }
        else{
            start = mid + 1;
        }
    }

    return end;
}

int main(){

    int num[] = {7, 2, 5, 8, 10};
    int size = sizeof(num)/sizeof(num[0]);
    int m =2;

    std::cout<<"Split sub arrays largest sum is: "<<findSplitArraysLargestSum(num, m, size)<<std::endl;

}