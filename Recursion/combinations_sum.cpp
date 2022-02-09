//Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

//The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

//It is guaranteed that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

#include <iostream>
#include <vector>

using namespace std;

void findCombinations(int index, int target, vector<int> & candidates, vector<vector<int>>& ans, vector<int>&           combinations){
        if(index >= candidates.size()){
            if(target == 0)
                ans.push_back(combinations);
            return;
        }
        
        if(candidates[index] <= target){
            combinations.push_back(candidates[index]);
            findCombinations(index, target - candidates[index], candidates, ans, combinations);
            combinations.pop_back();
        }
        findCombinations(index + 1, target, candidates, ans, combinations);
}

int main(){
    int target = 7;
    vector<int> combinations;
    vector<vector<int>> ans;
    vector<int> candidates;
    candidates.push_back(2);
    candidates.push_back(3);
    candidates.push_back(6);
    candidates.push_back(7);
    findCombinations(0, target, candidates, ans, combinations);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
