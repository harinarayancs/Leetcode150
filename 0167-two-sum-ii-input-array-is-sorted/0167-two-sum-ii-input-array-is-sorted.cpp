class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        while(l<r){
            int curr = nums[l]+nums[r];
            if(target==curr){
                return {l+1,r+1};
            }
            if(curr<target){
                l++;
            }
             if(curr>target){
                r--;
            }
            }
        return {};
        }
};