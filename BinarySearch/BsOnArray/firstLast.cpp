



/**
 * @file firstLast.cpp
 * @brief This file contains the implementation of the Solution class, which provides a method to search for the first and last occurrence of a target element in a given vector of integers.
 */

#include <vector>

//class Solution {
//public:
    /**
     * @brief Searches for the first and last occurrence of the target element in the given vector of integers.
     * @param nums The vector of integers to search in.
     * @param target The target element to search for.
     * @return A vector containing the indices of the first and last occurrence of the target element. If the target element is not found, returns {-1, -1}.
     */
    //vector<int> searchRange(vector<int>& nums, int target) {
        // Implementation code...
  ////  }
//};
// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int t) {
//         vector<int>v;
//         v.push_back(-1);
//         v.push_back(-1);

//         int l=0,r=nums.size()-1,mid=0;
//         while(l<=r){
//              mid=(l+r)/2;
//              if(nums[mid]==t){
//                 int rt=mid,lt=mid;
               
//                 while (lt >= 0 && nums[lt] == t) {
//                     v[0] = lt--;
//                 }
//                 while (rt <= r && nums[rt] == t) {
//                     v[1] = rt++;
//                 }
//                return v;
//              }else{
//                  if(nums[mid]<t){
//                      l=mid+1;
//                  }else{
//                     r=mid-1;
//                  }
//              }
//         }  
        
//          return v;
//     }
// };


class Solution {
public:
int lb(vector<int>& nums,int target){
    int s=0;
    int e=nums.size()-1;
    int ans=nums.size();
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]>=target){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
          }
    }
    return ans;
}
int ub(vector<int>& nums,int target){
    int s=0;
    int e=nums.size()-1;
    int ans1=nums.size();
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]>target){
            ans1=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
          }
    }
    return ans1;
}
    vector<int> searchRange(vector<int>& nums, int target) {

        int lbb=lb(nums,target);
        int ubb=ub(nums,target);
        if(lbb==nums.size() || nums[lbb]!=target){
           return {-1,-1};
       }
    //     if(ubb==nums.size() || nums[ubb]!=target){
       //     return {-1,-1};
     //   }
        return{lbb,ubb-1};
        
    }
};