



/**
 * This file contains the implementation of the "longestConsecutive" function,
 * which calculates the length of the longest consecutive subsequence in a given vector of integers.
 * The function uses an unordered_set to efficiently store and access the elements of the vector.
 * It iterates through the set, checking if each element has a predecessor in the set.
 * If not, it starts counting the length of the consecutive subsequence starting from that element.
 * The function returns the length of the longest consecutive subsequence found.
 */
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         unordered_map<int, bool> mp;
        
//         for (auto i : nums) {
//             mp[i] = true;
//         }
        
//         for (auto i : nums) {
//             if (mp.find(i - 1) != mp.end()) {
//                 mp[i] = false;
//             }
//         }
        
//         int count = 0;
        
//         for (int i = 0; i < nums.size(); i++) {
//             if (mp[nums[i]]) {
//                 int j = 0;
                
//                 while(mp.count(nums[i]+j) > 0){
//                     j++;
//                 }
                
//                 count = max(count, j);
//             }
//         }
        
//         return count;
//     }
// };



//better optimise --- less time  taken
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        int len = 0, longest = 0;
        for (auto num: set) {
            if (set.find(num - 1) != set.end()) {
                continue;
            }
            len = 1;
            // cout << "before " << num << endl;
            while (set.find(num = (num + 1)) != set.end()) {
                len++;
                // cout << num << endl;
            }
            longest = max(longest, len);
        }
        return longest;
    }
};