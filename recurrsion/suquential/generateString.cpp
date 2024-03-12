

/**
 * @brief Generates all possible binary strings of length N.
 * 
 * This function generates all possible binary strings of length N using a recursive approach.
 * It starts with an empty string and appends either '0' or '1' to it at each step until the desired length is reached.
 * The generated strings are stored in a vector and returned.
 * 
 * @param N The length of the binary strings to be generated.
 * @return A vector containing all possible binary strings of length N.
 */
void binary(vector<string>& b, int N, string s) {
    if (N == 0)
        b.push_back(s);
    else if (!s.empty() && s.back() == '1')
        binary(b, N - 1, s + "0");
    else {
        binary(b, N - 1, s + "0");
        binary(b, N - 1, s + "1");
    }
}

/**
 * @brief Generates all possible binary strings of length N.
 * 
 * This function generates all possible binary strings of length N by calling the binary() function.
 * It initializes an empty string and passes it to the binary() function along with the desired length.
 * The generated binary strings are returned as a vector.
 * 
 * @param N The length of the binary strings to be generated.
 * @return A vector containing all possible binary strings of length N.
 */
vector<string> generateString(int N) {
    vector<string> b;
    string s = "";
    binary(b, N, s);
    return b;
}
void binary(vector<string>&b, int n, string s ){
    if(n==0)
    b.push_back(s);
    else if(!s.empty() and s.back()=='1')
    binary(b,n-1,s+"0");
    else{
        binary(b,n-1,s+"0");
        binary(b, n-1, s+"1");
    }

}



vector<string> generateString(int N) {
    // Write your code here.
    vector<string>b;
    string s ="";
    binary(b,N,s);
    return b;
    
}