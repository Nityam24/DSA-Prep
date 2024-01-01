

/**
 * @brief Finds the lower bound of a given element in a sorted array.
 * 
 * @param arr The sorted array of integers.
 * @param n The size of the array.
 * @param x The element to find the lower bound for.
 * @return The index of the lower bound of the element in the array.
 */
int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] >= x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}
