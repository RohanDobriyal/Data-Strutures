#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int k = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    
    int newLength = solution.removeDuplicates(nums);
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
       cout << nums[i] << " ";
    }

    cout << "\nNew length: " << newLength << endl;

    return 0;
}
