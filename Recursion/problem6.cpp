//Find count of zeroes in number using recursion

#include <iostream>

using namespace std;

int count(int n){
    if( n == 0)
      return 0;
    if(n % 10 == 0){
        return 1 + count(n/10);
    }

    return count(n/10);
}

int main(){
    int n = 402003;

    cout<<"Count of zeroes in number is: "<<count(n)<<"\n";

    return 0;
}