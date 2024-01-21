




/**
 * @class Solution
 * @brief This class provides a solution for finding the minimum number of days required to bloom a given number of bouquets.
 */
class Solution {
public:
    /**
     * @brief Checks if it is possible to create the required number of bouquets within a given number of days.
     * @param arr The array representing the bloom days of flowers.
     * @param day The current day being considered.
     * @param m The required number of bouquets.
     * @param k The number of flowers required to make a bouquet.
     * @return True if it is possible to create the required number of bouquets within the given number of days, false otherwise.
     */
    bool possible(vector<int> &arr, int day, int m, int k) {
        // Implementation details...
    }
    
    /**
     * @brief Finds the minimum number of days required to bloom the given number of bouquets.
     * @param bloomDay The array representing the bloom days of flowers.
     * @param m The required number of bouquets.
     * @param k The number of flowers required to make a bouquet.
     * @return The minimum number of days required to bloom the given number of bouquets. Returns -1 if it is impossible to create the required number of bouquets.
     */
    int minDays(vector<int>& bloomDay, int m, int k) {
        // Implementation details...
    }
};
class Solution {
public:
    bool possible(vector<int> &arr, int day, int m, int k) {
    int n = arr.size(); //size of the array
    int cnt = 0;
    int noOfB = 0;
    // count the number of bouquets:
    for (int i = 0; i < n; i++) {
        if (arr[i] <= day) {
            cnt++;
        }
        else {
            noOfB += (cnt / k);
            cnt = 0;
        }
    }
    noOfB += (cnt / k);
    return noOfB >= m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        
    long long val = m * 1ll * k * 1ll;
    int n = bloomDay.size(); //size of the array
    if (val > n) return -1; //impossible case.
    //find maximum and minimum:
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        mini = min(mini, bloomDay[i]);
        maxi = max(maxi, bloomDay[i]);
    }

    //apply binary search:
    int low = mini, high = maxi;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (possible(bloomDay, mid, m, k)) {
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return low;
}
    
};