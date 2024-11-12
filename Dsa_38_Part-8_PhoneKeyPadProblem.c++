// 1 time

/*            Phone Keypad Problem    */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    void solve(string digit, string output, int index, vector<string>& ans, string mapping[]) {
        // Base Case
        if (index >= digit.length()) {
            ans.push_back(output);
            return;
        }
        int number = digit[index] - '0';  // Convert char to int
        string value = mapping[number];

        for (int i = 0; i < value.length(); i++) {
            output.push_back(value[i]); // Include the current character
            solve(digit, output, index + 1, ans, mapping); // Recursive call
            output.pop_back(); // Backtrack to explore other combinations
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length() == 0) {
            return ans; // Return empty if no digits are provided
        }
        string output;
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
    }
};

// Function to display the combinations
void displayCombinations(const vector<string>& combinations) {
    if (combinations.empty()) {
        cout << "No combinations available." << endl;
        return;
    }

    cout << "Letter Combinations:" << endl;
    for (const auto& combination : combinations) {
        cout << combination << endl; // Print each combination on a new line
    }
}

int main() {
    Solution solution;
    string digits = "3"; // Example input
    vector<string> result = solution.letterCombinations(digits);

    displayCombinations(result); // Call the display function

    return 0;
}

















