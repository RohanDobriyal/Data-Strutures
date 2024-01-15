#include <iostream>
#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

int main() {
    // Example usage:
    Solution solution;

    std::vector<int> nums = {3, 2, 2, 3};
    int val = 2;

    int newLength = solution.removeElement(nums, val);

    // Output the modified array and its new length
    std::cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        std::cout << nums[i] << " ";
    }

    std::cout << "\nNew length: " << newLength << std::endl;

    return 0;
}
