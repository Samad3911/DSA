//Letter Combinations of a Phone Number
//Google Interview Questions

#include <iostream>
#include <string>
#include<vector>

using namespace std;

void combinations(string p, string up, vector<string>& ans){
        if(up.empty()){
            ans.push_back(p);
            return;
        }
        int digit = up[0] - '0';
        if(digit == 7){
            for(int i = (digit * 2 + 1);i <= (digit - 1)*3;i++){
                char ch = (char)('a' + i);
                combinations(p + ch, up.substr(1), ans); 
            }
        }
        else if(digit == 8){
            for(int i = digit * 2 + 3;i <= (digit - 1) *3;i++){
                char ch = (char)('a' + i);
                combinations(p + ch, up.substr(1), ans);
            }
        }
        else if(digit == 9){
            for(int i = digit * 2 + 4;i<=(digit * 3) - 2;i++){
                char ch = (char)('a' + i);
                combinations(p + ch, up.substr(1), ans);
            }
        }
        else{
            for(int i = (digit - 2) * 3;i < (digit - 1) * 3;i++){
                char ch = (char)('a' + i);
                combinations(p + ch, up.substr(1), ans);
            }
        }
    }

int main(){

    vector<string> ans;
    string digits = "23";
    combinations("", digits, ans);
    for(string x : ans){
        cout<<x<<"\n";
    }
    return 0;
}