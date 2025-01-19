class Solution {//boyer moore majority voting algorithm
public:
    int majorityElement(vector<int>& nums) {
        int el;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if (cnt == 0){
                cnt = 1;
                el = nums[i];
            }
            else if (el == nums[i]){
                cnt++;
            }
            else{
                cnt --;
            }
        }
        int cnt1=0;
        for(int i=0; i<nums.size();i++){
            if (el == nums[i]) cnt1 ++;
        }
        if (cnt1>nums.size()/2) return el;
        else return -1;
    }
};
/*class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }

        for (auto it : mpp) {
            if (it.second > (n / 2)) {
                return it.first;
            }
        }

        return -1;
    }

};*/
