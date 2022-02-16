//A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, find if there is a celebrity in the party or not.
//A square NxN matrix M[][] is used to represent people at the party such that if an element of row i and column j  is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        for(int i = 0;i < n;i++){
            s.push(i);
        }
        while(s.size() > 1){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            
            if(M[a][b] == 1){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        
        int candidate = s.top();
        
        for(int i = 0; i < n;i++){
            if(i != candidate){
                if(M[i][candidate] == 0 || M[candidate][i] == 1){
                return -1;
            }
            }
            
        }
        
        return candidate;
    }

int main(){

    vector<vector<int>> M {
        { 0, 1, 0},
        { 0, 0, 0},
        { 0, 1, 0}
    };

    int ans = celebrity(M, M[0].size());
    if(ans != -1){
        cout<<ans<<" is the celebrity\n";
    }
    else{
        cout<<"There is no celebrity\n";
    }
    return 0;
}