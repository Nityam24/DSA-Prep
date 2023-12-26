class Solution {
public:
    std::vector<int> rearrangeArray(std::vector<int>& nums) {
        int n = nums.size();
        int pos = 0, neg = n / 2 - 1;
        std::vector<int> temp(n);
        int j = 0, k = n / 2 ;

        for (int i = 0; i < n; i++) {
            if (nums[i] >0) {                       //alway take care of condition
                temp[j++] = nums[i];
            } else {
                temp[k++] = nums[i];
            }
        }

        j = 0;
        k = n / 2 ;                                //if even order array divided into two parts then second part start with k=n/2
                                                   //and not k=n/2-1

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                nums[i] = temp[j++];
            } else {
                nums[i] = temp[k++];
            }
        }

        return nums;
    }
};