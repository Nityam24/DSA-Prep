

/**
 * @brief This code implements a binary search algorithm to search for a target element in a rotated sorted array.
 * 
 * The `search` function takes a vector of integers `nums` and an integer `target` as input.
 * It performs a binary search on the `nums` array to find the index of the `target` element.
 * If the `target` element is found, the function returns its index. Otherwise, it returns -1.
 * 
 * The algorithm handles the case where the array is rotated by finding the pivot point and adjusting the search range accordingly.
 * It compares the `target` element with the middle element of the current range and updates the search range based on the comparison.
 * The search range is divided in half at each step until the `target` element is found or the search range is exhausted.
 * 
 * @param nums The rotated sorted array of integers.
 * @param target The element to search for in the array.
 * @return The index of the target element if found, -1 otherwise.
 */
class Solution {
public:
    int search(vector<int>& nums, int target) {
       int l=0, r=nums.size()-1, mid=0;
       int n= nums.size()-1;
       while(l<=r){
           mid=(l+r)/2;
           if(target==nums[mid]){
               return mid;
           }
           if(nums[mid]>nums[n]){
               if(target>nums[mid]||target<nums[0]){
                   l=mid+1;
               }else{
                   r=mid-1;
               }
           }else{
               if(target<nums[mid]||target>nums[n]){
                   r=mid-1;
               }else{
                   l=mid+1;
               }
           }
       } 
       return -1;
    }
};