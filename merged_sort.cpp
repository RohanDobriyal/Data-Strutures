#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        // Copy the elements of nums2 to the end of nums1
        for (int j = 0, i = m; j < n; j++, i++) {
            nums1[i] = nums2[j];
        }

        // Sort only the merged part of nums1
        std::sort(nums1.begin(), nums1.begin() + m + n);
    }
};

int main() {
    // Example usage:
    Solution solution;

    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;

    std::vector<int> nums2 = {2, 5, 6};
    int n = 3;

    solution.merge(nums1, m, nums2, n);

    // Output the merged and sorted array
    std::cout << "Merged and sorted array: ";
    for (int num : nums1) {
        std::cout << num << " ";
    }

    return 0;
}
