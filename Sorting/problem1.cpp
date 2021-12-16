//Find missing number
//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array
//Amazon interview questions

#include <iostream>

using namespace std;

int missing_Number(int* arr, int size){
    int i = 0;
    while(i < size){
        int correctIndex = arr[i];
        if(arr[i] < size && arr[i] != arr[correctIndex]){
            int temp = arr[correctIndex];
            arr[correctIndex] = arr[i];
            arr[i] = temp;
        }
        else{
            i++;
        }
    }

    for(int index = 0;index < size;index++){
        if(arr[index] != index){
            return index;
        }
    }

    return size;


}

int main(){
    int arr[] = {9,6,4,2,3,5,7,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cout<<"Missing number is: "<<missing_Number(arr, size)<<std::endl;

    return 0;
}

