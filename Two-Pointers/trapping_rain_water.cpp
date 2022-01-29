//Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

#include <iostream>
#include <vector>

using namespace std;


int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left(n, 0);
        vector<int> right(n, 0);
        int ans = 0;
        left[0] = height[0];
        right[n-1] = height[n-1];
        for(int i=1;i<n;i++){
            left[i] = max(left[i-1], height[i]);
        }
        for(int i=n-2;i>=0;i--){
            right[i] = max(right[i+1], height[i]);
        }
        
        for(int i=1;i<n-1;i++){
            int var = min(left[i - 1], right[i + 1]);
            if(var > height[i]){
                ans += var - height[i];
            }
        }
        
        return ans;
    }

int main(){
    vector<int> height {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout<<"The amount of water that can be trapped is: "<<trap(height)<<endl;
    return 0;
}