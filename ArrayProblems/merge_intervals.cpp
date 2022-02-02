//Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> output;
        if(intervals.size() == 0){
            return output;
        }
        sort(intervals.begin(), intervals.end());
        
        vector<int> temp = intervals[0];
        
        for(auto &interval : intervals){
            if(interval[0] <= temp[1]){
                temp[1] = max(interval[1], temp[1]);
            }
            else{
                output.push_back(temp);
                temp = interval;
            }
        }
        
        output.push_back(temp);
        
        return output;
 }


int main(){
    vector<vector<int>> intervals { {1, 3}, {2, 6}, {8, 10}, {15, 18}};
    cout<<"Before merging "<<endl;
    for(auto &it : intervals){
        cout<<"[ "<<it[0]<<", "<<it[1]<<" ]"<<" ";
    }
    cout<<endl;
    auto output = merge(intervals);
    cout<<"After merging "<<endl;
    for(auto& it : output){
        cout<<"[ "<<it[0]<<", "<<it[1]<<" ]"<<" ";
    }
    cout<<endl;
    return 0;
}