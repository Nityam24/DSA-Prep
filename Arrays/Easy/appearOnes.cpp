

/**
 * @brief This code implements a solution to find the single number in an array.
 * 
 * The singleNumber function takes a vector of integers as input and returns the number that appears only once in the array.
 * It uses the XOR operation to find the single number by XORing all the elements in the array.
 * The XOR operation cancels out the duplicate numbers, leaving only the single number.
 * 
 * @param nums The input vector of integers.
 * @return The single number that appears only once in the array.
 */
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
	   for(auto x:nums)
	   ans^=x;
	   return ans;
    
    }
};