

/**
 * @brief This class provides a solution to find the missing number in an array.
 */
class Solution {
public:
    /**
     * @brief Finds the missing number in the given array.
     * 
     * @param nums The input array of integers.
     * @return The missing number in the array.
     */
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = n*(n+1)/2;
        int sum = 0;
        int dif;
        for(int i =0; i<n; i++){
            sum = sum+nums[i];
        }
        dif = total-sum;
        return dif;
    }
};