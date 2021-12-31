//Bubble sort using recursion

#include <iostream>

using namespace std;

void bubble_Sort(int *arr, int size, int i){
    if(size == 0){
        return;
    }
    if(i < size - 1){
        if(arr[i] > arr[i + 1]){
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        bubble_Sort(arr,size,i+1);
    }
    else{
        bubble_Sort(arr, size - 1, 0);
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
    bubble_Sort(arr, size, 0);
    std::cout<<"After sorting\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}