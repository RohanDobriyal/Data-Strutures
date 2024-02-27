#include<iostream>
#include<vector>  // Include vector header
#include<algorithm>

using namespace std;
class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), greater<int>());
        
        int h = 0;
        for (int i = 0; i < citations.size(); ++i) {
            if (citations[i] >= i + 1) {
                h = i + 1;
            } else {
                break;
            }
        }
        
        return h;
    }
};
int main() {
    vector<int> citations = {3, 0, 6, 1, 5};
    Solution sol;
    int h = sol.hIndex(citations);
    cout << "The researcher's h-index is: " << h << endl;
    return 0;
}
