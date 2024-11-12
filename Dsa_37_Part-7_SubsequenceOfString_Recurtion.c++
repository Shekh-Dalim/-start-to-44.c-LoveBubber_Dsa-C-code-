// // 2 time but revision again and again

/****************** Q:1 LeetCode- 78 , Subsets ******************/

// #include <vector>
// #include <iostream>
// using namespace std;

// class Solution
// {
// private:
//     //          input               output              Index         Ans
//     void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
//     {
//         // Base Case
//         if (index >= nums.size())
//         {
//             ans.push_back(output);
//             return;
//         }
//         // Exclude
//         solve(nums, output, index + 1, ans);

//         // Include
//         int element = nums[index];           // Take the element
//         output.push_back(element);           // Include the element in the output
//         solve(nums, output, index + 1, ans); // Recurse
//     }

// public:
//     vector<vector<int>> subsets(vector<int> &nums)
//     {
//         vector<vector<int>> ans; // Store all outputs
//         vector<int> output ; // Create Output Array
//         int index = 0;
//         solve(nums, output, index, ans); // Pass Output Array
//         return ans;
//     }
// };
// // Function to print all subsets stored in the result vector
// void printSubsets(const vector<vector<int>> &result) {
    
//     for (const auto& subset : result) {  // Loop through each subset in the result vector
//         cout << "[";                     // Print the opening bracket for the subset

//         for (int i = 0; i < subset.size(); i++) {  // Loop through each element in the current subset
//             cout << subset[i];                     // Print the current element

//             if (i < subset.size() - 1) {   // Check if the current element is not the last in the subset
//                 cout << ", ";              // Print a comma if there are more elements to follow
//             }
//         }

//         cout << "]" << endl; // Print the closing bracket and a newline after the subset
//     }
// }


// int main()
// {
//     Solution solution;
//     vector<int> nums = {1, 2, 3}; // Example input
//     vector<vector<int>> result = solution.subsets(nums);

  
//     // Print the subsets
//     printSubsets(result);

//     return 0;
// }


/* Dry rubn the print funtion

Iteration 1:
---------------------------------------------------
(subset = {}):
cout << "["; // Output: [
// subset.size() is 0, so the inner loop does not execute.
cout << "]\n"; // Output: []


Iteration 2:
---------------------------------------------------
(subset = {3}):
cout << "["; // Output: [
for (int i = 0; i < 1; ++i) { // subset.size() is 1
    cout << subset[i]; // Output: 3
    // No comma since it's the last element.
}
cout << "]\n"; // Output: [3]


Iteration 3:
---------------------------------------------------
(subset = {2}):
cout << "["; // Output: [
for (int i = 0; i < 1; ++i) { // subset.size() is 1
    cout << subset[i]; // Output: 2
    // No comma since it's the last element.
}
cout << "]\n"; // Output: [2]


Iteration 4:
---------------------------------------------------
(subset = {2, 3}):
cout << "["; // Output: [
for (int i = 0; i < 2; ++i) { // subset.size() is 2
    cout << subset[i]; // Output: 2
    cout << ", "; // Output: ,
    cout << subset[i + 1]; // Output: 3
}
cout << "]\n"; // Output: [2, 3]


Iteration 5:
---------------------------------------------------
(subset = {1}):
cout << "["; // Output: [
for (int i = 0; i < 1; ++i) { // subset.size() is 1
    cout << subset[i]; // Output: 1
    // No comma since it's the last element.
}
cout << "]\n"; // Output: [1]


Iteration 6:
---------------------------------------------------
(subset = {1, 3}):
cout << "["; // Output: [
for (int i = 0; i < 2; ++i) { // subset.size() is 2
    cout << subset[i]; // Output: 1
    cout << ", "; // Output: ,
    cout << subset[i + 1]; // Output: 3
}
cout << "]\n"; // Output: [1, 3]


Iteration 7:
---------------------------------------------------
(subset = {1, 2}):
cout << "["; // Output: [
for (int i = 0; i < 2; ++i) { // subset.size() is 2
    cout << subset[i]; // Output: 1
    cout << ", "; // Output: ,
    cout << subset[i + 1]; // Output: 2
}
cout << "]\n"; // Output: [1, 2]


Iteration 8:
---------------------------------------------------
(subset = {1, 2, 3}):
cout << "["; // Output: [
for (int i = 0; i < 3; ++i) { // subset.size() is 3
    cout << subset[i]; // Output: 1
    cout << ", "; // Output: ,
    cout << subset[i + 1]; // Output: 2
    cout << ", "; // Output: ,
    cout << subset[i + 2]; // Output: 3
}
cout << "]\n"; // Output: [1, 2, 3]
Final Printed Output
Combining all the output from the iterations above, the final printed result from the main function will be:

plaintext

[]
[3]
[2]
[2, 3]
[1]
[1, 3]
[1, 2]
[1, 2, 3]
*/


/**************** Q:2 Subsequence of string  ********/
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    void solve(string str, string output, int index, vector<string> &ans)
    {
        // Base case
        if (index >= str.length())
        {
            ans.push_back(output);
            return;
        }
        // Exclude
        solve(str, output, index + 1, ans);

        // Include
        char element = str[index];
        output.push_back(element);
        solve(str, output, index + 1, ans);
        
    }

public:
    vector<string> subsequences(string str)
    {
        vector<string> ans;
        string output = "";
        int index = 0;
        solve(str, output, index, ans);
        return ans;
    }
};

void printSubsets(const vector<string> &result) {
    
    for (const auto& subset : result) {  // Loop through each subset in the result vector
        cout << "[";                     // Print the opening bracket for the subset

        for (int i = 0; i < subset.size(); i++) {  // Loop through each element in the current subset
            cout << subset[i];                     // Print the current element
        }

        cout << "]" << endl; // Print the closing bracket and a newline after the subset
    }
}

int main()
{
    Solution solution;
    string str = "abc"; // Example input
    vector<string> result = solution.subsequences(str);

    printSubsets(result);

    return 0;
}