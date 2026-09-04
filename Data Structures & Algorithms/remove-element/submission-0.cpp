class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    vector<int>keep;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val){
                keep.push_back(nums[i]);
            }
        }
        for(int i=0; i<keep.size(); i++){
            nums[i]=keep[i];
        }
    return keep.size();
    }
};