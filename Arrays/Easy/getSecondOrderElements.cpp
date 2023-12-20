/*
The getSecondOrderElements function takes an integer n and a vector a as input and returns a vector containing the second largest and second smallest elements from the input vector a.

Here's how the code works:

It initializes an empty vector temp to store the second largest and second smallest elements.
It initializes two variables maxi and mini with the maximum and minimum possible integer values, respectively.
It then iterates over the input vector a using a for loop from index 0 to n-1.
Inside the loop, it updates the values of maxi and mini by comparing them with the current element a[i]. This ensures that maxi holds the maximum element and mini holds the minimum element from the vector a.
After the first loop, it initializes two more variables maxi2 and mini2 with the maximum and minimum possible integer values, respectively.
It then iterates over the input vector a again using a for loop.
Inside this loop, it checks if the current element a[i] is equal to either maxi or mini. If it is, it continues to the next iteration of the loop using the continue statement.
If the current element is not equal to maxi or mini, it updates the values of maxi2 and mini2 by comparing them with the current element a[i]. This ensures that maxi2 holds the second largest element and mini2 holds the second smallest element from the vector a.
Finally, it adds the values of maxi2 and mini2 to the temp vector using the push_back function.
It returns the temp vector, which contains the second largest and second smallest elements from the input vector a.
*/

#include <bits/stdc++.h> 
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int> temp;
    int maxi = INT_MIN;
    int mini = INT_MAX;

    for (int i = 0; i < n; i++) {
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
    }
    int maxi2=INT_MIN;
    int mini2=INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] == maxi || a[i] == mini) continue;
         maxi2 = max(maxi2, a[i]);
         mini2 = min(mini2, a[i]);
        
    }
    temp.push_back(maxi2);
    temp.push_back(mini2);

    return temp;
}

