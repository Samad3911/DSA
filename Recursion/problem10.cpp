//Print all subsets of a array

#include <iostream>
#include <vector>

using namespace std;

void findSubsets(vector<int>& ans, vector<int>& nums, vector<vector<int>>& output, int index){
    if(index>=nums.size()){
        output.push_back(ans);
        return;
    }
    ans.push_back(nums[index]);
    findSubsets(ans, nums, output, index + 1);
    ans.pop_back();
    findSubsets(ans, nums, output, index + 1);
}

int main(){
    vector<int> ans;
    vector<vector<int>> output;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    findSubsets(ans, nums, output, 0);
    for(int i=0;i<output.size();i++){
        for(int j=0;j<output[i].size();j++){
            cout<<output[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
