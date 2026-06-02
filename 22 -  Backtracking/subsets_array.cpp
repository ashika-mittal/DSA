#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> ans;
void solve(int i, vector<int>& nums, vector<int>& subset) {
        if (i == nums.size()) {
            ans.push_back(subset);
            return;
        }

        // take
        subset.push_back(nums[i]);
        solve(i + 1, nums, subset);

        // backtrack
        subset.pop_back();

        // not take
        solve(i + 1, nums, subset);
    }

    int main() {
        vector<int> nums = {1, 2, 3};
        vector<int> subset;
        solve(0, nums, subset);

        cout << "Subsets are: " << endl;
        for(int i = 0; i < ans.size(); i++) {
            for(int j = 0; j < ans[i].size(); j++) {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }

        return 0;
    }   