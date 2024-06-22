class Solution {
public:
   void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  // i points to the last element of nums1 (excluding the 0s)
  int i = m - 1;
  // j points to the last element of nums2
  int j = n - 1;
  // k points to the last element in the merged array (nums1)
  int k = m + n - 1;

  // Compare elements from nums1 and nums2 and insert the larger one into nums1 at the end (pointed to by k)
  while (i >= 0 && j >= 0) {
    if (nums1[i] >= nums2[j]) {
      nums1[k] = nums1[i];
      i--;
    } else {
      nums1[k] = nums2[j];
      j--;
    }
    k--;
  }

  // Copy the remaining elements of nums2 (if any) to nums1
  while (j >= 0) {
    nums1[k] = nums2[j];
    j--;
    k--;
  }
}

};