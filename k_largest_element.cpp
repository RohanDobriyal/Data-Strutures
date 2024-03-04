#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sort(vector<int>& nums) {
    sort(nums.begin(), nums.end());
}

void k_largest_element(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    for (int i = nums.size() - k; i < nums.size(); ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> nums = {3, 1, 2, 4, 6, 5};
    int k = 4;
    int n = nums.size(); 
    k_largest_element(nums, k);
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
