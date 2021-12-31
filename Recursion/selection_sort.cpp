//Selection sort using recursion

#include <iostream>

using namespace std;

void selection_Sort(int *arr, int size, int i, int max){
    if(size == 0){
        return;
    }
    if(i < size){
        if(arr[max] < arr[i]){
            selection_Sort(arr, size, i + 1, i);
        }
        else{
            selection_Sort(arr, size, i+1, max);
        }
        
    }
    else{
        int temp = arr[size - 1];
        arr[size - 1] = arr[max];
        arr[max] = temp;
        selection_Sort(arr, size - 1, 0, 0);
    }
}

int main(){
    int arr[] = { 4, 2, 1, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cout<<"Before sorting\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    selection_Sort(arr, size, 1, 0);
    std::cout<<"After sorting\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}