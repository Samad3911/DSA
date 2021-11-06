//Find floor of a number 
// floor - greatest element smaller than or equal to target

#include <iostream>

using namespace std;


int find_floor_number(int arr[], int target, int size)
{
    int start = 0,end = size-1;
    if(target < arr[start]){
        return -1;
    }
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == target)
        return arr[mid];
        else if(arr[mid] < target)
        start = mid + 1;
        else
        end = mid - 1;
    }

    return arr[end];

}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 13, 17, 21};
    int size = sizeof(arr)/sizeof(arr[0]);

    int ans = find_floor_number(arr, 9, size);

    if(ans == -1){
        std::cout<<"Floor of given number doesn't exist in the array "<<std::endl;
    }
    else{
        std::cout<<"Floor of given number is: "<<ans<<std::endl;
    }
   

    return 0;
}