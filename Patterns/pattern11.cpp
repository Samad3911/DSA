/* Pattern 11

    * * * * *
     * * * *
      * * *
       * *
        *

*/

#include <iostream>

using namespace std;

void Pattern(int n){
    for(int row = 1; row<= n; row ++){
        for(int space = 1; space < row; space++){
            cout<<" ";
        }
        for(int col = n - row + 1; col >= 1; col --){
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
