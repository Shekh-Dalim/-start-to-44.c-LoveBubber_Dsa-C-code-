#include <iostream> 
#include <vector> 
#include <algorithm> // Include algorithm library for sorting

using namespace std; 

class Solution {
private:
    // Helper function to check if moving to (x, y) is safe
    bool isSafe(int x, int y, int n, vector<vector<int>> &visited, vector<vector<int>> &m) {
        // Check if (x, y) is within bounds, not visited, and path is open
        if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1) {
            return true; // Safe to proceed
        }
        return false; // Not safe to proceed
    }

    // Recursive function to find paths from source to destination
    void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> &visited, string path) {
        // Base case: If destination is reached, store the path
        if (x == n - 1 && y == n - 1) {
            ans.push_back(path); // Add path to answer list
            return; // Return to previous call
        }

        // Mark current cell as visited
        visited[x][y] = 1;

        // Attempt to move in all four possible directions (Down, Up, Left, Right)

        // Move Down
        int newX = x + 1;
        int newY = y;
        if (isSafe(newX, newY, n, visited, m)) { // Check if safe to move
            path.push_back('D'); // Add 'D' to path
            solve(m, n, ans, newX, newY, visited, path); // Recursive call for next step
            path.pop_back(); // Backtrack to remove last step
        }

        // Move Up
        newX = x - 1;
        newY = y;
        if (isSafe(newX, newY, n, visited, m)) { // Check if safe to move
            path.push_back('U'); // Add 'U' to path
            solve(m, n, ans, newX, newY, visited, path); // Recursive call for next step
            path.pop_back(); // Backtrack to remove last step
        }

        // Move Left
        newX = x;
        newY = y - 1;
        if (isSafe(newX, newY, n, visited, m)) { // Check if safe to move
            path.push_back('L'); // Add 'L' to path
            solve(m, n, ans, newX, newY, visited, path); // Recursive call for next step
            path.pop_back(); // Backtrack to remove last step
        }

        // Move Right
        newX = x;
        newY = y + 1;
        if (isSafe(newX, newY, n, visited, m)) { // Check if safe to move
            path.push_back('R'); // Add 'R' to path
            solve(m, n, ans, newX, newY, visited, path); // Recursive call for next step
            path.pop_back(); // Backtrack to remove last step
        }

        // Unmark the current cell as part of backtracking
        visited[x][y] = 0;
    }

public:
    // Function to find all paths from source to destination
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans; // To store all possible paths
        int srcX = 0; // Starting x-coordinate
        int srcY = 0; // Starting y-coordinate

        // Initialize visited matrix with 0 (unvisited)
        vector<vector<int>> visited(n, vector<int>(n, 0));

        string path = ""; // Initialize empty path
        solve(m, n, ans, srcX, srcY, visited, path); // Start solving from source
        sort(ans.begin(), ans.end()); // Sort paths lexicographically
        return ans; // Return all paths
    }
};

int main() {
    // Define a sample maze (4x4 matrix)
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
    
    int n = maze.size(); // Size of the maze
    Solution sol; // Create Solution object
    vector<string> result = sol.findPath(maze, n); // Find paths

    // Print all found paths
    for (const auto &path : result) {
        cout << path << endl;
    }

    return 0; // End of program
}
