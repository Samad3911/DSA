/* Pattern 8

        *
       ***
      *****
     *******
    *********

*/

#include <iostream>

using namespace std;

void Pattern(int n){
    for(int row = 1; row<= n; row ++){
        for(int spaces = n - row; spaces >= 1;spaces--){
            cout<<" ";
        }
        for(int col = 1; col <= 2 * row - 1; col ++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main(){
    int n;

    cout<<"Enter the level upto which you want the pattern\n";
    cin>>n;

    Pattern(n);

    return 0;
}
