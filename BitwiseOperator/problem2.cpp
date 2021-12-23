//Find unique element in the array

#include <iostream>

using namespace std;

int main(){
    int arr[] = {2, 4, 3, 4, 2};
    int ans = 0;

    for(int x : arr){
        ans ^= x;
    } 

    std::cout<<"The unique element is: "<<ans<<"\n";

    return 0;
}