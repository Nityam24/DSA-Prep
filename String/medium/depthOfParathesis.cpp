

/**
 * @class Solution
 * @brief This class provides a solution for finding the maximum depth of parentheses in a given string.
 */
class Solution {
public:
    /**
     * @brief Calculates the maximum depth of parentheses in the given string.
     * @param s The input string.
     * @return The maximum depth of parentheses.
     */
    int maxDepth(string s) {
        return solve(s);
    }

private:
    /**
     * @brief Helper function to calculate the maximum depth of parentheses.
     * @param s The input string.
     * @return The maximum depth of parentheses.
     */
    int solve(string &s) {
        int n = s.size();
        int maxi = 0;
        int temp = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                temp++;
            } else if (s[i] == ')') {
                maxi = max(maxi, temp);
                temp--;
            }
        }
        return maxi;
    }
};
class Solution {
public:

int solve(string &s){
    int n = s.size();
    int maxi = 0;
    int temp = 0;
    for(int i=0;i<n;i++){
       if(s[i] == '('){
        temp++;
       }
       else if(s[i] == ')'){
          maxi = max(maxi, temp);
        temp--;
       }
    }

    return maxi;
}

    int maxDepth(string s) {
        return solve(s);
    }
};