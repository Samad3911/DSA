//Reset the ith bit

#include <iostream>

using namespace std;

int main(){
    int n = 26;
    int i = 5;

    n &= ~(1 << (i - 1));

    return 0;
}