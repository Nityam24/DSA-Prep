/*
    This code implements a function to rotate an array by a given number of positions.
    The function takes an array 'arr' and an integer 'k' as input.
    It creates a new array 'r' of size 'k' and copies the first 'k' elements of 'arr' into 'r'.
    Then, it shifts the remaining elements of 'arr' to the left by 'k' positions.
    Finally, it appends the elements from 'r' to the end of 'arr' to complete the rotation.
    The rotated array is then returned as the output.
*/
/*
*/

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size();
    vector<int> r(k);
    for(int i = 0; i<k; i++){
        r[i] = arr[i];
    }

    for(int i=0; i<n-k; i++){
        arr[i] = arr[i+k];
    }
    for(int i=n-k, j=0; i<n; i++, j++){
        arr[i]=r[j];
    }
    return arr;
}
