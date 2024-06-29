class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seenElements;
        
        for (int num : nums) { // Iterate through each element in the nums vector
            if (seenElements.find(num) != seenElements.end()) {
                // If the current element is already in the set, return true
                return true;
            }
            // Add the current element to the set
            seenElements.insert(num);
        }
        
        // If no duplicates are found, return false
        return false;
    }
};