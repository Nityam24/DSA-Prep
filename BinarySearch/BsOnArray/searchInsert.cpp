


/**
 * @brief This code implements the searchInsert function, which searches for a target value in a sorted array and returns its index if found. If the target value is not found, it returns the index where it would be inserted to maintain the sorted order.
 * 
 * @param nums The input vector representing the sorted array.
 * @param target The target value to search for.
 * @return int The index of the target value if found, or the index where it would be inserted.
 */
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size();
        
        int mid;
        if(target>nums[h-1]){
            return h;
        }
        while(l<=h){
            mid = (l+h)/2; 
            if(target==nums[mid]){
                return mid;
            }
            if(target<nums[mid]){
                h = mid-1;
            }else{
                l = mid+1;
            }
        }
        return l;
    }
};

// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int low=0;
//         int high=nums.size();
//         int mid;
//         if(target>nums[high-1]){
//             return high;
//         }
//         while(low<=high){
//               mid=(low+high)/2;
//             if(nums[mid]==target){  
//                 return mid;
//             }
          
//             if(target<nums[mid]){     
//             high=mid-1;    
//             }else{
//             low=mid+1;        
//             }
          
//         }
//          return  low;   
//     }
// };