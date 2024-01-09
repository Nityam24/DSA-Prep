


/**
 * @brief This file contains functions to perform binary search on a sorted array and count the occurrences of a given target element.
 */

/**
 * @brief Finds the lower bound index of the target element in the sorted array.
 * 
 * @param nums The sorted array of integers.
 * @param target The target element to search for.
 * @return The lower bound index of the target element.
 */
int lb(vector<int>& nums, int target) {
    // Implementation of binary search to find lower bound
    // ...
}

/**
 * @brief Finds the upper bound index of the target element in the sorted array.
 * 
 * @param nums The sorted array of integers.
 * @param target The target element to search for.
 * @return The upper bound index of the target element.
 */
int ub(vector<int>& nums, int target) {
    // Implementation of binary search to find upper bound
    // ...
}

/**
 * @brief Counts the occurrences of a target element in the sorted array.
 * 
 * @param arr The sorted array of integers.
 * @param n The size of the array.
 * @param x The target element to count.
 * @return The count of occurrences of the target element.
 */
int count(vector<int>& arr, int n, int x) {
    // Find the lower bound and upper bound of the target element
    int lbb = lb(arr, x);
    int ubb = ub(arr, x);
      
    // Calculate the count of occurrences
    return (ubb) - lbb;
}


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


int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int lbb=lb(arr,x);
        int ubb=ub(arr,x);
      
        return (ubb)-lbb;

}
