//Skip a character in string using recursion

#include <iostream>
#include <string>

using namespace std;

string skipCharacter(string str, char ch,int i, string ans){
    if(i == str.size()){
        return ans;
    }
    if(str[i] != ch){
        return skipCharacter(str, ch, i + 1, ans + str[i]);
    }
    else{
        return skipCharacter(str, ch, i + 1, ans);
    }
}

int main(){
    string str="baccad";
    char ch = 'a';
    
    cout<<"New string after skipping character is: "<<skipCharacter(str, ch, 0, " ")<<"\n";


    return 0;
}