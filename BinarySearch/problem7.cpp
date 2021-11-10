//Find element in mountain array

#include <iostream>

using namespace std;

int binarySearch(int arr[], int target, int start, int end)
{
    bool isAsc = arr[start] < arr[end];

    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == target)
        return mid;
        if(isAsc){
            if(arr[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        else{
            if(arr[mid] > target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        
    }

    return -1;

}

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

int search(int arr[], int target, int size){
    
    int peak = find_peak_index(arr, size);
    int first = binarySearch(arr, target, 0, peak);
    if(first != -1){
        return first;
    }
    return binarySearch(arr, target, peak+1, size-1);
}

int main(){
    int arr[] = {1, 3, 5, 7, 4, 2, 0};
    int target = 5;
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = search(arr, target, size);
    if(ans == -1){
        std::cout<<"Element not found"<<std::endl;
    }
    else{
        std::cout<<"Element found at "<<ans<<" index "<<std::endl;
    }
    return 0;
}