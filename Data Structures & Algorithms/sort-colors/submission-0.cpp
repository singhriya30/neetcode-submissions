class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> red;
        vector<int> white;
        vector<int> blue;
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                red.push_back(nums[i]);
            }
            else if(nums[i]==1){
                white.push_back(nums[i]);
            }
            else{
                blue.push_back(nums[i]);
            }
        }
        int index=0;
    for(int x : red)
        nums[index++] = x;

    for(int x : white)
        nums[index++] = x;

    for(int x : blue)
        nums[index++] = x;
    }
};