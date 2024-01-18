



/**
 * @brief This code implements the NthRoot function using binary search.
 * 
 * The NthRoot function calculates the Nth root of a given number M.
 * It uses binary search on the answer space to find the Nth root.
 * The function returns the Nth root if it exists, otherwise it returns -1.
 * 
 * @param n The value of N representing the root.
 * @param m The value of M for which the Nth root needs to be calculated.
 * @return The Nth root of M if it exists, otherwise -1.
 */
#include <bits/stdc++.h>
using namespace std;

//return 1, if == m:
//return 0, if < m:
//return 2, if > m:
int func(int mid, int n, int m) {
    long long ans = 1;
    for (int i = 1; i <= n; i++) {
        ans = ans * mid;
        if (ans > m) return 2;
    }
    if (ans == m) return 1;
    return 0;
}

int NthRoot(int n, int m) {
    //Use Binary search on the answer space:
    int low = 1, high = m;
    while (low <= high) {
        int mid = (low + high) / 2;
        int midN = func(mid, n, m);
        if (midN == 1) {
            return mid;
        }
        else if (midN == 0) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}