//Facebook Interview Question
//Find the first and last position of target in sorted array

#include <iostream>

using namespace std;


int search(int arr[], int target, int size, bool firstOccurence){

        int start = 0,end = size-1, ans = -1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(arr[mid] == target)
            {
                ans = mid;
                if(firstOccurence){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
            else if(arr[mid] < target)
            start = mid + 1;
            else
            end = mid - 1;
        }

        return ans;
}

void searchFirstAndLastOccurence(int arr[], int target, int size, int* ans)
{
  ans[0] = search(arr, target, size, true);
  if(ans[0] != -1){
      ans[1] = search(arr, target, size, false);
  }

}


int main()
{
    int arr[] = {2, 5, 7, 7, 7, 7, 8, 8, 13};
    int size = sizeof(arr)/sizeof(arr[0]);

    int* ans = new int(2);
    ans[0] = -1;
    ans[1] = -1;

    searchFirstAndLastOccurence(arr, 7, size, ans);

   std::cout<<"The first and last occurence of target in array is: "<<ans[0]<<" "<<ans[1]<<std::endl;

    return 0;
}