

/**
 * @brief This code implements the singleNonDuplicate function, which finds the single non-duplicate element in a sorted array.
 * 
 * The singleNonDuplicate function takes a vector of integers as input and returns the single non-duplicate element in the array.
 * The function uses binary search to find the non-duplicate element.
 * 
 * @param nums The input vector of integers.
 * @return The single non-duplicate element in the array.
 */


// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         int left = 0, right = nums.size() - 1;
//         while (left < right) {
//             int mid = (left + right) / 2;
//             if (mid % 2 == 1) {
//                 mid--;
//             }
//             if (nums[mid] != nums[mid + 1]) {
//                 right = mid;
//             } else {
//                 left = mid + 2;
//             }
//         }
//         return nums[left];
//     }
// };




class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        int n = nums.size();
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];
        int ans;
        int s = 1, e = n-2;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                ans = nums[mid];
            }
            if((mid%2==1 && nums[mid]==nums[mid-1]) || (mid%2==0 && nums[mid]==nums[mid+1])){
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
        return ans;
    }
};