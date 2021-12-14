//Find element in rotated sorted binary array

#include <iostream>

using namespace std;

int binarySearch(int arr[], int target, int start, int end)
{
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == target)
        return mid;
        else if(arr[mid] > target){
            end = mid - 1;
            
        }
        else{
            start = mid + 1;
        }
        
    }

    return -1;

}

int find_peak_index(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(mid < end && arr[mid] > arr[mid + 1]){
            return mid;
        }

        if(mid > start && arr[mid] < arr[mid - 1]){
            return mid - 1;
        }

        if(arr[mid] <= arr[start]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    return -1;
}

int search(int arr[], int target, int size){
    
    int peak = find_peak_index(arr, size);
    
    if(peak == -1){
        return binarySearch(arr, target, 0, size - 1);
    }

    if(arr[peak] == target){
        return peak;
    }

    if(target >= arr[0]){
        return binarySearch(arr, target, 0, peak - 1);
    }

    return binarySearch(arr, target, peak + 1, size - 1);
}

int main(){
    int arr[] = {4, 5, 6, 0, 1, 2, 3};
    int target = 2;
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