//Find the ith bit

#include <iostream>

using namespace std;

int main(){
    int n = 10;
    int i = 5;

    if(n & (1 << (i - 1))){
        std::cout<<"ith bit is 1\n";
    }
    else{
        std::cout<<"ith bit is 0\n";
    }

    return 0;
}