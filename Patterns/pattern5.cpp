/* Pattern 5

    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *

*/

#include <iostream>

using namespace std;

void Pattern(int n){
    for(int row = 1; row<= 2* n - 1; row++){
        int totalNoOfCols = row > n ? 2*n - row : row;
        for(int col = 1; col <= totalNoOfCols; col++){
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
