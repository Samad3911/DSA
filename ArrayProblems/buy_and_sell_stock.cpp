//You are given an array prices where prices[i] is the price of a given stock on the ith day.

//You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

//Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int maxProfit(vector<int>& prices) {
        int maxProfit = 0, minPrice = INT_MAX;
        for(auto &it : prices){
            minPrice = min(minPrice, it);
            maxProfit = max(maxProfit, it - minPrice);
        }
        
        return maxProfit;
}

int main(){

    vector<int> prices { 7, 1, 5, 3, 6, 4};

    cout<<"Maximum profit that can be made by buying and selling the stock is : "<<maxProfit(prices)<<endl;

    return 0;
}