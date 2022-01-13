//Store all permutations of a string in an array or vector

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void permutations(string p, string up, vector<string>& ans){
    if(up.empty()){
        ans.push_back(p);
        return;
    }
    char ch = up[0];
    for(int i=0;i<=p.length();i++){
        string f = p.substr(0, i);
        string l = p.substr(i, p.length());
        permutations(f + ch + l, up.substr(1), ans);
    }
}

int main(){
    string str = "abc";
    vector<string> ans;
    permutations("", str, ans);
    for(auto x: ans){
        cout<<x<<"\n";
    }
    return 0;
}