class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> count(nums.size(),0);
        int n=0;
        for (int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        for (int i=0;i<count.size();i++){
            if (count[i]>=2){
                n=i;
            }
        }
        return n;
    }
};
