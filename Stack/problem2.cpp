//Check for valid parenthesis

#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s) {
        stack<char> st;
        
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else{
                if(!st.empty()){
                    char top = st.top();
                    if((ch == ')' && top == '(') ||(ch == '}' && top == '{') || (ch == ']' && top == '[')){
                        st.pop();
                    }
                    else
                        return false;
                }
                else{
                    return false;
                }
            }
        }
        
        return st.empty();
}

int main(){

    string s = "(){}[]";

    if(isValid(s)){
        cout<<"Balanced Parenthesis\n";
    }
    else{
        cout<<"UnBalanced Parenthesis\n";
    }

    s = "(]";

    if(isValid(s)){
        cout<<"Balanced Parenthesis\n";
    }
    else{
        cout<<"UnBalanced Parenthesis\n";
    }

    return 0;
}