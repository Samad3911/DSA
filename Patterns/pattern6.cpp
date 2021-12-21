/* Pattern 6

         *
        **
       ***
      ****
     *****

*/

# include <iostream>

using namespace std;

void Pattern(int n){
    for(int row = 1; row<= n; row++){
        for(int spaces = 1; spaces <= n - row;spaces++){
            cout<<" ";
        }
        for(int col = 1; col <= row; col++){
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
