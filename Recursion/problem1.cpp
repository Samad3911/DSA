//Find factorial of a number using recursion

#include <iostream>

using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }

    return n * factorial(n - 1);
}

int main(){
    int n = 5;

    cout<<"Factorial of given number is: "<<factorial(n)<<"\n";

    return 0;
}