//Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

#include <iostream>
#include <stack>
#include <vector>

using namespace std;


vector<int> previousSmallerElement(vector<int>& heights){
        int n = heights.size();
        vector<int> ans(n);
        
        stack<int> s;
        s.push(-1);
        
        for(int i = 0;i<n;i++){
            int curr = heights[i];
            while(s.top() != -1 && heights[s.top()] >= curr){
                s.pop();
            }
            ans[i] = s.top();
            
            s.push(i);
        }
        
        return ans;
    }
    
    vector<int> nextSmallerElement(vector<int>& heights){
        int n = heights.size();
        vector<int> ans(n);
        stack<int> s;
        s.push(-1);
        
        for(int i = n - 1;i>=0;i--){
            int curr = heights[i];
            while(s.top() != -1 && heights[s.top()] >= curr){
                s.pop();
            }
            ans[i] = s.top();
            
            s.push(i);
        }
        
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        int area = 0;
        int n = heights.size();
        vector<int> next = nextSmallerElement(heights);
        vector<int> prev = previousSmallerElement(heights);
        for(int i = 0;i < n;i++){
            int l = heights[i];
            if(next[i] == -1)
                next[i] = n;
            int b = next[i] - prev[i] - 1;
            
            area = max(area, l * b);
            
        }
        
        return area;
    }

int main(){
    vector<int> heights {2, 1, 5, 6, 2, 3};
    cout<<"Maximum Area of rectangle in histogram is: "<<largestRectangleArea(heights)<<endl;
    return 0;
}
