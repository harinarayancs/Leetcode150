class Solution {
public:
    int majorityElement(vector<int>& nums) {
            int count=0;
            int res = 0;
            for(int i=0;i<nums.size();i++){
                if(count==0){
                    res = nums[i];
                }
                if(res==nums[i]){
                    count++;
                }
                if(res!=nums[i]){
                    count--;
                }
        }
        return res;
    }
};