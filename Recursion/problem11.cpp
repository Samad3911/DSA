//Print all permutations of a string

#include <iostream>
#include <string>

using namespace std;

void permutations(string p, string up){
    if(up.empty()){
        cout<<p<<"\n";
        return;
    }
    char ch = up[0];
    for(int i=0;i<=p.length();i++){
        string f = p.substr(0, i);
        string l = p.substr(i, p.length());
        permutations(f + ch + l, up.substr(1));
    }
}

int main(){
    string str = "abc";
    permutations("", str);
    return 0;
}