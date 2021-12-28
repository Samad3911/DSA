//Find product of digits using recursion

#include <iostream>

using namespace std;

int productOfDigits(int n){
    if(n == 0){
        return 1;
    }

    return (n % 10 * productOfDigits(n/10));
}

int main(){
    int n = 423;

    cout<<"Product of digits is: "<<productOfDigits(n)<<"\n";

    return 0;
}