class Solution {
public:
   void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
   int i = m - 1; // Last element in the actual part of nums1
    int j = n - 1; // Last element in nums2
    int k = m + n - 1; // Last position in nums1

    // While there are elements to be considered in both arrays
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // If there are still elements in nums2
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }

    // No need to consider remaining elements in nums1 because they are already in place
}
};