// 1 time

/**************  Permutation of a string *********/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
private:
    void solve(vector<int> nums, vector<vector<int>> &ans, int index)
    {
        // Base Case
        if (index >= nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for (int j = index; j < nums.size(); j++)
        {
            swap(nums[index], nums[j]);
            solve(nums, ans, index + 1);

            // BackTracking
            swap(nums[index], nums[j]);  // again we need to abc thats way again swap 
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = sol.permute(nums);

    for (const auto &permutation : result)
    {
        for (int num : permutation)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}



/*
Let’s expand the tree diagram, including all swap functions and recursive calls for each configuration at Level 2.

Tree Diagram Representation of solve({1, 2, 3}, ans, 0)
Level 0 (Root)
solve({1, 2, 3}, ans, 0)


Level 1: --------------------------------------

First Iteration (j = 0): swap(nums[0], nums[0]) → {1, 2, 3}

Recursive Call: solve({1, 2, 3}, ans, 1)
Second Iteration (j = 1): swap(nums[0], nums[1]) → {2, 1, 3}

Recursive Call: solve({2, 1, 3}, ans, 1)
Third Iteration (j = 2): swap(nums[0], nums[2]) → {3, 2, 1}

Recursive Call: solve({3, 2, 1}, ans, 1)


Level 2:-------------------------------------------

(Exploration of Each Configuration)
Each recursive call from Level 1 now proceeds similarly, with swaps at each recursive depth and backtracking after each swap to revert nums to its previous state.

First Configuration: ----------

solve({1, 2, 3}, ans, 1)

Loop in solve({1, 2, 3}, ans, 1):

First Iteration (j = 1): swap(nums[1], nums[1]) → {1, 2, 3}

Recursive Call: solve({1, 2, 3}, ans, 2)
Second Iteration (j = 2): swap(nums[1], nums[2]) → {1, 3, 2}

Recursive Call: solve({1, 3, 2}, ans, 2)
After exploring both configurations {1, 2, 3} and {1, 3, 2}, backtrack to restore {1, 2, 3}.

Second Configuration:---------

solve({2, 1, 3}, ans, 1)

Loop in solve({2, 1, 3}, ans, 1):

First Iteration (j = 1): swap(nums[1], nums[1]) → {2, 1, 3}

Recursive Call: solve({2, 1, 3}, ans, 2)
Second Iteration (j = 2): swap(nums[1], nums[2]) → {2, 3, 1}

Recursive Call: solve({2, 3, 1}, ans, 2)
After exploring both configurations {2, 1, 3} and {2, 3, 1}, backtrack to restore {2, 1, 3}.

Third Configuration:-------

solve({3, 2, 1}, ans, 1)

Loop in solve({3, 2, 1}, ans, 1):

First Iteration (j = 1): swap(nums[1], nums[1]) → {3, 2, 1}

Recursive Call: solve({3, 2, 1}, ans, 2)
Second Iteration (j = 2): swap(nums[1], nums[2]) → {3, 1, 2}

Recursive Call: solve({3, 1, 2}, ans, 2)
After exploring both configurations {3, 2, 1} and {3, 1, 2}, backtrack to restore {3, 2, 1}.

Level 3:------------------------------

(Final Permutations and Base Case)
For each Level 2 configuration, the Level 3 recursive calls reach the base case (index = 3) and add the permutations to ans:

First Configuration ({1, 2, 3}) → permutations {1, 2, 3} and {1, 3, 2}
Second Configuration ({2, 1, 3}) → permutations {2, 1, 3} and {2, 3, 1}
Third Configuration ({3, 2, 1}) → permutations {3, 2, 1} and {3, 1, 2}

*/