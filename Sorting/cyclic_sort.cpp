#include <iostream>

using namespace std;

void cyclic_Sort(int* arr, int size){
    int i = 0;
    while(i < size){
        int correctIndex = arr[i] - 1;
        if(arr[i] != arr[correctIndex]){
            int temp = arr[correctIndex];
            arr[correctIndex] = arr[i];
            arr[i] = temp;
        }
        else{
            i++;
        }
    }
}

int main(){
    int arr[] = {4, 1, 2, 5, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cout<<"Before sorting: "<<std::endl;
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    cyclic_Sort(arr, size);
    std::cout<<"After sorting: "<<std::endl;
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

}