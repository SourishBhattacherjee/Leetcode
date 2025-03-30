class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<int,int> last;
        for(int i = 0; i < s.size(); i++){
            last[s[i]] = i;
        }
        vector<int> result;
        int left = 0, right = 0;
        for(int i = 0; i < s.length();i++){
            right = max(right, last[s[i]]);
            if(i == right){
                result.push_back(right - left + 1);
                left = i + 1;
            }
        }
        return result;
    }
};
