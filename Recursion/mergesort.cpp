//Merge sort using recursion

#include <iostream>

using namespace std;


void merge(int *arr, int start, int mid, int end){
    int i=0,j=0,k=0;

    int n1 = mid - start + 1;
    int n2 = end - mid;

    int left[n1];
    int right[n2];

    for(;i<n1;i++){
        left[i] = arr[start + i]; 
    }

    for(;j<n2;j++){
        right[j] = arr[mid + 1 + j];
    }

    i=0,j=0,k=start;

    while(i < n1 && j < n2){
        if(left[i] <= right[j]){
            arr[k++] = left[i++];
        }
        else{
            arr[k++] = right[j++];
        }
    }
    while(i < n1){
        arr[k++] = left[i++];
    }
    while(j < n2){
        arr[k++] = right[j++];
    }


}
void merge_Sort(int *arr, int start, int end){
    if(end <= start){
        return;
    }


    int mid = start + (end - start)/2;

    merge_Sort(arr, start, mid);
    merge_Sort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

int main(){
    int arr[] = { 4, 2, 1, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cout<<"Before sorting\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    merge_Sort(arr, 0, size - 1);
    std::cout<<"After sorting\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}