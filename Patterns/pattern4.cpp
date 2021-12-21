/* Pattern 4

    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

*/

# include <iostream>

using namespace std;

void Pattern(int n){
    for(int row = 1; row<= n; row++){
        for(int col = 1; col <= row; col++){
            cout<<col<<" ";
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
