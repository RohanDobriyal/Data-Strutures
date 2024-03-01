#include<iostream>
#include<vector>
using namespace std;

bool jump_game(vector<int>&arr){
    int maxreach=0;
    for(int i=0;i<arr.size();i++){
        if(i>maxreach){
            return false;
        }
        maxreach=max(maxreach,i+arr[i]);
        if(maxreach>=arr.size()-1){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> arr = {2, 3, 1, 1, 4};
    cout << boolalpha << jump_game(arr);
    return 0;
}