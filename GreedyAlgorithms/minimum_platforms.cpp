//Given arrival and departure times of all trains that reach a railway station. Find the minimum number of platforms required for the railway station so that no train is kept waiting.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findPlatform(vector<int>& arr, vector<int>& dep, int n)
    {
    	sort(arr.begin(), arr.end());
    	sort(dep.begin(), dep.end());
    	int i = 1, j = 0;
    	int result = 0, platform = 1;
    	while(i < n && j < n){
    	    if(arr[i] <= dep[j]){
    	        platform++;
    	        i++;
    	    }
    	    else{
    	        platform--;
    	        j++;
    	    }
    	    if(platform > result){
    	        result = platform;
    	    }
    	}
    	
    	return result;
    }

int main(){
    vector<int> arr {900, 940, 950, 1100, 1500, 1800};
    vector<int> dep {910, 1200, 1120, 1130, 1900, 2000};

    cout<<"No of minimum platforms required are : "<<findPlatform(arr, dep, arr.size())<<endl;


    return 0;
}