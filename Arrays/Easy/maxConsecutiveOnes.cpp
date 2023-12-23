

/**
 * @brief This class provides a solution to find the maximum number of consecutive ones in a given array.
 */
class Solution {
public:
    /**
     * @brief Finds the maximum number of consecutive ones in the given array.
     * @param nums The input array of integers.
     * @return The maximum number of consecutive ones.
     */
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        int maxcount = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]==1){
                count = count+1;
                maxcount = max(maxcount, count);
            }else{
                count=0;
            }            
        }
        return maxcount;
    }
};