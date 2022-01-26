//Given a string s, find the length of the longest substring without repeating characters.

#include <iostream>
#include <vector>



using namespace std;

int lengthOfLongestSubstring(string s) {
        vector<int> freq(256, -1);
        int left = 0, right = 0, n = s.size(), len = 0;
        while(right < n){
            if(freq[s[right]] != -1)
                left = max(freq[s[right]] + 1, left);
            freq[s[right]] = right;
            len = max(len, right - left + 1);
            right++;
        }
        
        return len;
    }

int main(){
    string s("abcabcbb");

    cout<<"Length of longest substring without repeating character is: "<<lengthOfLongestSubstring(s)<<endl;


    return 0;
}