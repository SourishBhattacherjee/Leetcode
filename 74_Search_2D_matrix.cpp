class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool result=false;
        for(int i=0;i<matrix.size();i++){
            for (int j=0;j<matrix[i].size();j++){
                if (target==matrix[i][j]){
                    result=true;
                }
            }
        }
        return result;
    }
};
