


/**
 * @brief This code implements the "minEatingSpeed" function, which calculates the minimum eating speed required for a person to eat all the bananas in a given number of hours.
 * 
 * The function takes a vector of integers representing the number of bananas in each pile and an integer representing the total number of hours available.
 * It uses a binary search algorithm to find the minimum eating speed that allows the person to eat all the bananas within the given time constraint.
 * 
 * The algorithm starts by checking if there is only one pile of bananas. In this case, it directly calculates the minimum eating speed without running the binary search algorithm.
 * 
 * Otherwise, it initializes the total number of bananas eaten and the maximum number of bananas in a pile.
 * Then, it iterates through each pile, calculating the number of bananas that can be eaten in one hour and updating the maximum number of bananas.
 * 
 * The algorithm then sets the lower and upper limits for the possible eating speeds. It uses a while loop to iteratively narrow down the range of possible speeds.
 * Inside the loop, it calculates the median speed and checks if it causes an overflow. If the speed is 0, it returns 1 as the minimum eating speed.
 * 
 * Next, it calculates the total number of bananas that can be eaten at the current speed. If the total is less than or equal to the available hours and there is no overflow, it updates the upper limit.
 * Otherwise, it updates the lower limit.
 * 
 * Finally, the function returns the lower limit, which represents the minimum eating speed required to eat all the bananas within the given time constraint.
 */
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        if (piles.size() == 1) {
            return (piles[0] / h + (piles[0] % h == 0 ? 0 : 1)); // Only 1 number to consider, no need to run through algorithm
        }

        int total = 0;
        int max = piles[0];
        for (int i = 0; i < piles.size(); ++i) {
            total += piles[i] / h;
            if (piles[i] > max) {
                max = piles[i];
            }
        }

        // If x is the solution: [lower_lim <= x <= upper_lim]
        int lower_lim = total; // Let smallest number of hours be the total of bananas in array / h
        int upper_lim = max; // Let the largest number of hours be the largest number in the array

        while (lower_lim < upper_lim) { // While the smallest and largest number of bananas aren't equal
            bool overflow = false;
            int mid = lower_lim + (upper_lim - lower_lim) / 2; // Take median of smallest and largest
            if (mid == 0) { // If mid is 0, the range is (0, 1) and defaults to just 1
                return 1;
            }
            total = 0;
            
            for (int i = 0; i < piles.size(); ++i) {
                int t = piles[i] / mid;
                if (INT_MAX - t < total) { // If adding this number onto total causes overflow, it cannot be smaller than the current smallest
                    overflow = true;
                } else if (t < 1) { // These three cases add onto total ensuring at least 1 for each hour
                    total++;
                } else if (piles[i] % mid == 0) {
                    total += t;
                } else {
                    total += t + 1;
                }
            }
            if (!overflow && total <= h) { // If the total hours is less than h, the largest possible number is now lowered
                upper_lim = mid;
            } else { // The smallest number is raised
                if (upper_lim - lower_lim == 1) {
                    return upper_lim;
                }
                lower_lim = mid;
            }
        }

        return lower_lim; // Return the smallest number of bananas to be eaten per hour
    }
};