/*
    This code defines a function named "rotateArray" that takes a vector of integers "arr" and an integer "n" as parameters.
    It rotates the elements of the array to the left by one position, with the last element moving to the first position.
    The function returns the modified array.
*/


#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int temp = arr[0];
    for(int i = 1; i<n; i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> result = rotateArray(arr, n);
    for(int i = 0; i<n; i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
