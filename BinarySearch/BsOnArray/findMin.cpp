


/**
 * @brief This code implements the binary search algorithm to find the minimum element in a sorted rotated array.
 * 
 * The `findMin` function takes a vector of integers `nums` as input and returns the minimum element in the array.
 * The algorithm uses a binary search approach to find the minimum element by comparing the middle element with the last element.
 * If the middle element is greater than the last element, it means the minimum element lies in the right half of the array.
 * Otherwise, the minimum element lies in the left half of the array.
 * The search continues by updating the start and end indices accordingly until the start index becomes equal to the end index.
 * Finally, the function returns the element at the start index, which is the minimum element in the array.
 * 
 * @param nums A vector of integers representing the sorted rotated array.
 * @return The minimum element in the array.
 */
class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        
        while(start<end){
            int mid=start+(end-start)/2;
            if(nums[mid]>nums[end]) start = mid+1;
            else end = mid;
        }

        return nums[start];
    }
};

// class Solution {
// public:
//     int findMin(vector<int>& arr) {
//         int low=0,high=arr.size()-1;
//         int ans=INT_MAX;
//         while(low<=high){
//             int mid=low+(high-low)/2;
//             if(arr[low]<=arr[mid]){
//                 ans=min(ans,arr[low]);
//                 low=mid+1;
//             }
//             else{
//                 ans=min(ans,arr[mid]);
//                 high=mid-1;
//             }
//         }
//         return ans;
//     }
// };