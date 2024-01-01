

/**
 * @brief This class provides a solution for performing binary search on a sorted array.
 */
class Solution {
public:
    /**
     * @brief Searches for a target value in the given vector using binary search algorithm.
     * @param nums The sorted vector of integers to search in.
     * @param target The target value to search for.
     * @return The index of the target value if found, otherwise -1.
     */
    int search(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return -1;
    }
};