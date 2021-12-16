#include <iostream>

using namespace std;

void insertion_Sort(int* arr, int size){
    for(int i = 0;i < size - 1; i++){
        for(int j = i + 1; j > 0;j--){
            if(arr[j] < arr[j - 1]){
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else{
                break;
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
    insertion_Sort(arr, size);
    std::cout<<"After sorting: "<<std::endl;
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

}