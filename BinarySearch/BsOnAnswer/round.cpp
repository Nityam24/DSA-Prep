


/**
 * @brief This file contains the implementation of a class Solution which includes two functions.
 * The round function rounds a double value to the nearest integer.
 * The smallestDivisor function finds the smallest divisor such that the sum of the rounded division
 * of each element in the given vector is less than or equal to the given threshold.
 */

class Solution {
public:
    /**
     * @brief Rounds a double value to the nearest integer.
     * @param a The dividend.
     * @param b The divisor.
     * @return The rounded integer value.
     */
    int round(double a, double b){
        int x = a / b;
        double n = a / b;
        if(n - x > 0)
            return x + 1;
        return x;
    }

    /**
     * @brief Finds the smallest divisor such that the sum of the rounded division of each element
     * in the given vector is less than or equal to the given threshold.
     * @param nums The vector of integers.
     * @param threshold The maximum sum of rounded divisions allowed.
     * @return The smallest divisor.
     */
    int smallestDivisor(vector<int>& nums, int threshold) {
        long long int s = 1, e, ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); ++i)
            e = e + nums[i];
        long long int mid = s + (e - s) / 2;
        while(s <= e){
            int sum = 0;
            for(int i = 0; i < nums.size(); ++i){
                sum += (round(nums[i], mid));
            }
            if(sum <= threshold){
                e = mid - 1;
                ans = mid;
            }
            else
                s = mid + 1;
            mid = s + (e - s) / 2;
        }
        return mid;
    }
};
