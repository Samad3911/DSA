#include <iostream>

using namespace std;

void selection_Sort(int* arr, int size){
    for(int i = 0;i < size - 1; i++){
        for(int j = i + 1; j < size;j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
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
    selection_Sort(arr, size);
    std::cout<<"After sorting: "<<std::endl;
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

}