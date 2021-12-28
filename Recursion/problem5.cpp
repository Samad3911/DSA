//Find reverse of a number using recursion

#include <iostream>
#include <math.h>

using namespace std;

int reverse(int n, int digits){
    if(n % 10 == n){
        return n;
    }

    return (n % 10) * pow(10, digits - 1) + reverse(n/10, digits - 1);
}

int main(){
    int n = 423;

    cout<<"Reverse of number is: "<<reverse(n, 3)<<"\n";

    return 0;
}