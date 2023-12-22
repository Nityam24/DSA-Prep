

/**
 * @brief Performs linear search on an array to find the index of a given number.
 * 
 * @param n The size of the array.
 * @param num The number to be searched.
 * @param arr The array in which the number is to be searched.
 * @return The index of the number if found, -1 otherwise.
 */
int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.
    for(int i = 0; i<n; i++){
        if(arr[i]==num)return i;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int num;
    cin >> num;

    int index = linearSearch(n, num, arr);

    cout << index << endl;

    return 0;
}