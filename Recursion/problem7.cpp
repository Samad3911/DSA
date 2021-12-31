//Find whether array is sorted or not using recursion

#include <iostream>

using namespace std;

bool isSorted(int* arr, int size, int i){

    if(i == size - 1){
        return true;
    }

    if(arr[i] > arr[i + 1]){
        return false;
    }

    return isSorted(arr, size, i + 1);

}

int main(){

    int arr[] = { 1, 7, 5, 8, 10};

    int size = sizeof(arr)/sizeof(arr[0]);

    if(isSorted(arr, size, 0)){
        cout<<"Array is sorted\n";
    }
    else{
        cout<<"Array is not sorted\n";
    }

    return 0;
}