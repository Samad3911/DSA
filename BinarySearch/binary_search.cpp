#include <iostream>

using namespace std;


int binarySearch(int arr[], int target, int size)
{
    int start = 0,end = size-1;

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
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 13, 17, 21};
    int size = sizeof(arr)/sizeof(arr[0]);

    int ans = binarySearch(arr, 13, size);

    if(ans == -1){
        std::cout<< "Element not found\n";
    }
    else{
        std::cout<< "Element found at "<<ans+1<<" position\n";
    }

    return 0;
}