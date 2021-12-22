/* Pattern 12

     * * * * *
      * * * *
       * * *
        * *
         *
         *
        * *
       * * *
      * * * *
     * * * * *

*/



#include <iostream>

using namespace std;

void Pattern(int n){
    for(int row = 1; row<= 2 * n; row ++){
        int totalNoOfCols = row > n ? row - n : n - row + 1;
        for(int space = 1; space < (n - totalNoOfCols); space++){
            cout<<" ";
        }

        for(int col = 1; col <= totalNoOfCols; col++){
            cout<<"* ";
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
