//Given an input stream of A of n characters consisting only of lower case alphabets. The task is to find the first non repeating character, each time a character is inserted to the stream. If there is no such character then append '#' to the answer.

#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;


string FirstNonRepeating(string A){
    string ans = "";
	unordered_map<char, int> count;
	queue<char> q;
	int n = A.length();
		    
	for(int i = 0;i<n;i++){
		char ch = A[i];
		        
		count[ch]++;
		        
		q.push(ch);
		        
		while(!q.empty()){
		    if(count[q.front()] > 1){
		        q.pop();
		    }
		    else{
		        ans += q.front();
		        break;
		        }
		    }
		        
		if(q.empty()){
		    ans += '#';
		}
	}
		    
	return ans;
}



int main(){
    string s ("aabc");
    cout<<"First non repeating character in stream are: "<<FirstNonRepeating(s)<<"\n";
    return 0;
}