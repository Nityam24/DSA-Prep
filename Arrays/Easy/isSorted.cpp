/*
The provided code is a C++ program that checks whether an array of integers is sorted in non-decreasing order.

The isSorted function takes two parameters: n, which represents the size of the array, and a, which is the array of integers. It uses a for loop to iterate through the array from the first element to the second-to-last element. Inside the loop, it compares each element with the next element. If the current element is less than or equal to the next element, it continues to the next iteration. If the current element is greater than the next element, it immediately returns 0, indicating that the array is not sorted. If the loop completes without encountering any out-of-order elements, it returns 1, indicating that the array is sorted.

The main function is the entry point of the program. It prompts the user to enter the size of the array (n) and then reads n integers from the user into the a vector. It then calls the isSorted function with the n and a parameters and prints the result.

Overall, this code checks whether an array of integers is sorted and returns 1 if it is, or 0 if it is not.
*/

int isSorted(int n, vector<int> a) {
    // Write your code here.
    for(int i = 0; i<n-1; i++){
      if (a[i] <= a[i + 1]) {
        continue;
      }else{
          return 0;
      }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    cout<<isSorted(n, a);
    return 0;
}