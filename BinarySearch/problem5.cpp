//Amazon Interview Questions
//Find the position of an element in an infinite sorted array

#include <iostream>

using namespace std;

int binarySearch(int arr[], int target, int start, int end)
{

    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == target)
        return mid;
        else if(arr[mid] < target)
        start = mid + 1;
        else
        end = mid - 1;
    }

    return -1;

}

int ans(int arr[], int target){
    int start =0;
    int end = 1;
    while(target > arr[end]){
        int newStart = end + 1;
        end = end + (end - start + 1) * 2;

        start = newStart;
    }

    return binarySearch(arr, target, start, end);
}

int main(){
    int arr[] = {2, 4, 6, 8, 10, 13, 17, 21, 27, 29, 33};
    std::cout<<"Position of given target element is: "<<ans(arr, 17)<<std::endl;

    return 0;
}