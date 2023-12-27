class Solution {
public:
    // void nextPermutation(vector<int>& nums) {
    //     next_permutation(nums.begin(), nums.end());
    // }
    void nextPermutation(vector<int>& nums){
         int n=nums.size();
        int k=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                k=i;
                break;
            }
        }
        if(k==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int l=n-1;l>=k;l--){
            if(nums[l]>nums[k]){
                swap(nums[l],nums[k]);
                break;
            }
        }
        reverse(nums.begin()+k+1,nums.end());
    }
};