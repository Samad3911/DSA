//Find sum of n to 1 using recursion

#include <iostream>

using namespace std;

int sum(int n){
    if(n == 1){
        return 1;
    }

    return n + sum(n - 1);
}

int main(){
    int n = 5;

    cout<<"Sum of n to 1 is: "<<sum(n)<<"\n";

    return 0;
}