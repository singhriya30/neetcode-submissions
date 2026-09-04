class Solution {
public:
    int majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        unordered_map<int, int> mpp;
        for(auto it: nums){
            mpp[it]++;
        }
        for(auto ghum: mpp){
            if (ghum.second > n/2){
                return ghum.first;
            }
        }
    return -1;
    }
};