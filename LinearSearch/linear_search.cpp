#include <iostream>

using namespace std;


int linear_search(int arr[], int target, int size)
{
     for(int i=0;i<size;i++)
     {
         if(arr[i] == target)
         return i;
     }
     return -1;
}
int main()
{
    int arr[]{1,2,3,4,5};
    
    int index = linear_search(arr, 7, 5);

    if(index != -1)
    cout<<"Element found at: "<<index+1<<" position"<<endl;
    else 
    cout<<"Element not found"<<endl;

    return 0;
}