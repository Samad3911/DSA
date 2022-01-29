//Given weights and values of N items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item{
    int value;
    int weight;
};

 bool compare(Item a, Item b){
        double r1 = (double)a.value/a.weight;
        double r2 = (double)b.value/b.weight;
        return r1 > r2;
    }


double fractionalKnapsack(int W, vector<Item>& arr, int n)
    {
        sort(arr.begin(), arr.end(), compare);
        
        int currWeight = 0;
        double total=0;
        for(int i=0;i<n;i++){
            if(currWeight + arr[i].weight <=W){
                total+=arr[i].value;
                currWeight+=arr[i].weight;
            }
            else{
                int remain = W - currWeight;
                total+= ((double)arr[i].value/(double)arr[i].weight)*(double)remain;
                break;
            }
        }
        return total;
    }


int main(){
    int W = 50;
    Item a, b, c;
    a.value = 60;
    a.weight = 10;
    b.value = 100;
    b.weight = 20;
    c.value = 120;
    c.weight = 30;
    vector<Item> arr;

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    cout<<"Total maximum value of item we can have from the given capacity of sack is "<<fractionalKnapsack(W, arr, arr.size())<<endl;


    return 0;
}