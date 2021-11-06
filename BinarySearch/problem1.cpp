//Find ceiling of a number 
// ceiling - smallest element greater than or equal to target

#include <iostream>

using namespace std;


int find_ceiling_number(int arr[], int target, int size)
{
    int start = 0,end = size-1;
    if(target > arr[end]){
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

    return arr[start];

}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 13, 17, 21};
    int size = sizeof(arr)/sizeof(arr[0]);

    int ans = find_ceiling_number(arr, 25, size);

    if(ans == -1){
        std::cout<<"Ceiling of given number doesn't exist in the array "<<std::endl;
    }
    else{
        std::cout<<"Ceiling of given number is: "<<ans<<std::endl;
    }
   

    return 0;
}