/*
This code removes duplicates from a given array by modifying the array in-place.
It uses a two-pointer approach to iterate through the array and replace duplicate elements with unique ones.
The function takes a reference to the array and the size of the array as input parameters.
It returns the length of the modified array after removing duplicates.
*/
int removeDuplicates(vector<int> &arr, int n) {
    // Write your code here.
    
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int result = removeDuplicates(arr, n);
    for(int i = 0; i<result; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}   