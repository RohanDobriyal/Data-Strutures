#include<iostream>
#include<algorithm>
using namespace std;

void array(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

void maximumProfit(int arr[], int n){
    int mini=arr[0];
    int profit=0;
    for(int i=0;i<n;i++){
        int cost=arr[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,arr[i]);
    }
    cout << "Maximum Profit: " << profit << endl;
}

int main(){
    int stocks[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(stocks)/sizeof(stocks[0]);
    
    cout << "Stock Prices:" << endl;
    array(stocks, n);
    
    maximumProfit(stocks, n);

    return 0;
}
