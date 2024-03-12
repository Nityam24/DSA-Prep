class Solution {
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
    vector<vector<int>> subsets(vector<int>& nums) {
        int i = 0;
        int size = nums.size();
        vector<vector<int>>ans;
        vector<int>temp;
        subsets(nums, ans, i, size, temp);
        return ans;
    }
};