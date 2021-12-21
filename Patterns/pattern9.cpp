/* Pattern 9

    *********
     *******
      *****
       ***
        *

*/

# include <iostream>

using namespace std;

void Pattern(int n){
    for(int row = 1; row<= n; row ++){
        for(int spaces = 1; spaces < row;spaces ++){
            cout<<" ";
        }
        for(int col = 2 * n - 2 * row + 1; col >= 1; col --){
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
