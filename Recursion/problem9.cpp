//Print all subsets of a string

#include <iostream>
#include <string>

using namespace std;

void subsequences(string p, string up){
    if(up.empty()){
        cout<<p<<"\n";
        return;
    }
    subsequences(p + up[0], up.substr(1));
    subsequences(p, up.substr(1));
}

int main(){
    subsequences("", "abc");
    return 0;
}
