//Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.

#include <iostream>
#include <vector>
#include <deque>

using namespace std;

vector<long long> printFirstNegativeInteger(vector<long long int>& A,
                                             long long int N, long long int K) {
                                                 
        
        
        
        deque<int> dq;
        vector<long long > ans;
        
        for(int i = 0;i < K;i++){
            if(A[i] < 0){
                dq.push_back(i);
            }
        }
        
        if(dq.size() > 0){
            ans.push_back(A[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
        
        for(int i = K;i<N;i++){
            if(!dq.empty() && (i - dq.front()) >= K){
                dq.pop_front();
            }
            if(A[i] < 0){
                dq.push_back(i);
            }
            
            
            if(dq.size() > 0){
            ans.push_back(A[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
        }
             return ans;                                    
 }



int main(){
    vector<long long int> A {-8, 2, 3, -6, 10};
    vector<long long > ans = printFirstNegativeInteger(A, A.size(), 2);
    for(auto it : ans){
        cout<<it<<" ";
    }
    cout<<"\n";
    return 0;
}