//Find the index of peak element in biotonic or mountain array
//Mountain or Biotonic Array :- An array which starts in ascending order and ends with descending order

#include <iostream>

using namespace std;


int find_peak_index(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start < end){
        int mid = start + (end - start)/2;

        if(arr[mid] > arr[mid+1]){
            end = mid;
        }else{
            start = mid + 1;
        }
    }

    return start;
}
int main(){
    int arr[] = {1, 3, 5, 7, 4, 2, 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cout<<"Index of peak element is: "<<find_peak_index(arr, size)<<std::endl;
    return 0;
}