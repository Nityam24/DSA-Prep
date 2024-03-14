

/**
 * @class Solution
 * @brief This class provides a method to generate all possible subsets of a given vector of integers.
 */
class Solution {
    /**
     * @brief Recursive helper function to generate subsets.
     * @param nums The input vector of integers.
     * @param ans The vector to store the generated subsets.
     * @param i The current index in the input vector.
     * @param size The size of the input vector.
     * @param temp The temporary vector to store the current subset being generated.
     */
    void subsets(vector<int> nums, vector<vector<int>>&ans, int i, int size, vector<int>temp){
        if(i == size){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        subsets(nums, ans, i+1, size, temp);
        temp.pop_back();

        subsets(nums, ans, i+1, size, temp);
    }
public:
    /**
     * @brief Generates all possible subsets of the given vector of integers.
     * @param nums The input vector of integers.
     * @return A vector of vectors containing all possible subsets.
     */
    vector<vector<int>> subsets(vector<int>& nums) {
        int i = 0;
        int size = nums.size();
        vector<vector<int>>ans;
        vector<int>temp;
        subsets(nums, ans, i, size, temp);
        return ans;
    }
};