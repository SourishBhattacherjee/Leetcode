class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> count(A.size()+1,0);
        vector<int> result;
        for(int i=0;i<A.size();i++){
            int c=0;
            count[A[i]]++;
            count[B[i]]++;
            for(int j=0;j<count.size();j++){
                if(count[j]==2){
                    c++;
                }
            }
            result.push_back(c);
        }
        return result;
    }
};