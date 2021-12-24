//Find the square root of a number

#include <iostream>

using namespace std;

double squareRoot(int n, int p){
    double root = 0.0;
    int start = 0, end = n;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(mid * mid == n){
            return mid;
        }
        else if(mid * mid > n){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    root = end;

    double increment = 0.1;

    for(int i = 0;i<p;i++){
        while(root*root <=n){
            root+=increment;
        }
        root-= increment;
        increment/=10;
    }
    
    return root;
}

int main(){
   int n = 40;
   int p = 3;
   
   std::cout<<"Square root of number "<<n<<" is: "<<squareRoot(n, p)<<"\n";
   return 0;
}