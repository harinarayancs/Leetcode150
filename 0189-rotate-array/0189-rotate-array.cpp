class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k =k % nums.size();
        int n = nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
        cout << endl;
    }
};