



/**
 * @brief Finds the number of rotations in a sorted array.
 * 
 * This function uses binary search to find the number of rotations in a sorted array.
 * The array is assumed to be rotated at some unknown pivot point.
 * 
 * @param arr The input array of integers.
 * @return The number of rotations in the array.
 */
int findKRotation(vector<int> &arr){
    // Write your code here. 
     int start=0,end=arr.size()-1;
        
        while(start<end){
            int mid=start+(end-start)/2;
            if(arr[mid]>arr[end]) start = mid+1;
            else end = mid;
        }

        return arr.size()-(arr.size()-start);   
}