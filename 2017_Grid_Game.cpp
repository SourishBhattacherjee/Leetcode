class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long topSum = 0;
        for (int i = 0; i<grid[0].size();i++){
            topSum+=grid[0][i];
        }
        long long botSum = 0;
        long long minSum = LONG_MAX;
        for (int i=0;i<grid[0].size();i++){
            topSum-=grid[0][i];
            minSum = min(minSum,max(topSum,botSum));
            botSum+=grid[1][i];
        }
        return minSum;
        
    }
};
