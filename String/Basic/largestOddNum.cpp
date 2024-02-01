

/**
 * @brief This class provides a solution to find the largest odd number in a given string.
 */
class Solution {
public:
    /**
     * @brief Finds the largest odd number in the given string.
     * 
     * @param num The input string containing digits.
     * @return The largest odd number found in the string. If no odd number is found, an empty string is returned.
     */
    string largestOddNumber(string num) {
        for(int i = num.size()-1; i>=0; i--){
            if(num[i]%2==1){
                return num;
            }
            num.pop_back();
        }
        return "";
    }
};