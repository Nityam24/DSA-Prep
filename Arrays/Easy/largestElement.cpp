/*Finding the Largest Element in an Array
In computer programming, it's a common task to find the largest element in an array. This task can be accomplished using various methods, but the most 
straightforward approach is to iterate through the array and compare each element with a variable that stores the maximum value found so far.

Here is a brief explanation of the code in Arrays\Easy\largestElement.cpp which accomplishes this task:

Code Explanation
The function largestElement takes a vector of integers and its size as arguments. It initializes a variable maxi to 0, which will
 hold the maximum value found in the array.*/

#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int maxi = 0;
    for(int i = 0; i<n; i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

/*
The function then iterates through the array. For each element, it updates maxi to be the maximum of maxi and the current element. 
This ensures that maxi always holds the maximum value found so far.

Finally, the function returns maxi, which by the end of the loop will hold the maximum value in the array.

In the main function, the size of the array n is read from the input, and then n numbers are read into the array. The largestElement function 
is then called with the array and its size as arguments, and the result is printed to the output.*/
 int main(){
     int n;
     cin>>n;
     vector<int> arr(n);
     for(int i = 0; i<n; i++){
         cin>>arr[i];
     }
     cout<<largestElement(arr, n);
     return 0;
 }