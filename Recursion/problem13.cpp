//Count all permutations of a string

#include <iostream>
#include <string>

using namespace std;

void permutations(string p, string up, int& count){
    if(up.empty()){
        count++;
        return;
    }
    char ch = up[0];
    for(int i=0;i<=p.length();i++){
        string f = p.substr(0, i);
        string l = p.substr(i, p.length());
        permutations(f + ch + l, up.substr(1), count);
    }
}

int main(){
    string str = "abc";
    int count=0;
    permutations("", str, count);
    cout<<"Total permutation of given string is "<<count<<"\n";
    return 0;
}