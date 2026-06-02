#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> ans;

void solve(vector<int>& nums, vector<int>& output) {
    // base case
    if (nums.size() == 0) {
        ans.push_back(output);
        return;
    }

    // iterate through the array and for each element,
    // remove it and make a recursive call with the remaining elements
    for (int i = 0; i < nums.size(); i++) {
        int element = nums[i];

        // remaining array after removing the element at index i
        vector<int> remaining = nums;
        remaining.erase(remaining.begin() + i); //in this .erase() removes the element at index i from the remaining array. and .begin() returns an iterator pointing to the first element of the vector. so remaining.begin() + i gives an iterator pointing to the element at index i, which is then removed from the vector.
        //other way to remove element at index i is to use the swap and pop_back technique
        // swap(remaining[i], remaining.back()); -> swap  element at index i and last element
        // remaining.pop_back();

        // recursive call with the remaining array and the output array appended with the current element
        output.push_back(element);
        solve(remaining, output);
        output.pop_back(); // backtrack to explore other possibilities
    }
}
       

int main() {
    vector<int> nums = {1, 2, 3};
    vector<int> output;

    solve(nums, output);

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}