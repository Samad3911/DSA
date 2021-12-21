/* Pattern 1

    *****
    *****
    *****
    *****
    *****

*/

# include <iostream>

using namespace std;

void Pattern(int n){
    for(int row = 1; row<= n; row++){
        for(int col = 1; col <= n; col++){
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
