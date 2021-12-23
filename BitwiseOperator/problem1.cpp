//Find Odd or Even

#include <iostream>

using namespace std;

int main(){
    int n = 20;

    if( n & 1){
        std::cout<<"Number is odd\n";
    }
    else{
        std::cout<<"Number is even\n";
    }

    return 0;
}