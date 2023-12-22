

/**
 * @brief This program takes two arrays as input and returns a sorted array containing the union of the two input arrays.
 * 
 * The function `itertationOFSET` iterates over the elements of the input array and inserts them into a set.
 * 
 * The function `sortedArray` creates an empty set `s1` and calls `itertationOFSET` function to insert elements from both input arrays into `s1`.
 * Finally, it returns a sorted vector containing the elements of `s1`.
 * 
 * @param a The first input array.
 * @param b The second input array.
 * @return A sorted vector containing the union of the two input arrays.
 */

 

vector < int > sortedArray(vector < int > a, vector < int > b) {

    set<int> s1;

    itertationOFSET(a , s1);

    itertationOFSET(b , s1);

    return vector<int>(s1.begin(),s1.end());

}