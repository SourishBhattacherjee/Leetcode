class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size(); 
        int n = mat[0].size(); 
        
        // Map to store number -> position (row, col) in matrix
        unordered_map<int, pair<int, int>> numToPos;
        
        // Store positions of each number in the matrix
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                numToPos[mat[i][j]] = {i, j};
            }
        }
        
        // Arrays to count painted cells in each row and column
        vector<int> rowCount(m, 0);
        vector<int> colCount(n, 0);
        
        // Process arr and update counts
        for (int i = 0; i < arr.size(); i++) {
            // Get position of current number in matrix
            auto [row, col] = numToPos[arr[i]];
            
            // Increment counts for this row and column
            rowCount[row]++;
            colCount[col]++;
            
            // Check if either row or column is complete
            if (rowCount[row] == n || colCount[col] == m) {
                return i;
            }
        }
        
        return arr.size() - 1; // Should never reach here given problem constraints
    }
};
