


/**
 * @brief This class provides a solution to find the longest common prefix among a vector of strings.
 */
class Solution {
public:
    /**
     * @brief Finds the longest common prefix among a vector of strings.
     * 
     * @param strs The vector of strings to find the longest common prefix from.
     * @return The longest common prefix as a string.
     */
    string longestCommonPrefix(vector<string>& strs) {
        // If there is only one string in the vector, return it as the longest common prefix
        if (strs.size() == 1) {
            return strs[0];
        }

        // Check if any string in the vector is empty, if so, return an empty string as the longest common prefix
        for (int i = 0; i < strs.size(); i++) {
            if (strs[i].length() == 0) {
                return "";
            }
        }

        string res = ""; // Initialize the result string
        int j = 0; // Index to iterate through characters of the first string

        // Iterate through each character position of the first string
        while (j < strs[0].length()) {
            bool flag = true; // Reset flag for each new character position

            // Compare the j-th character of each string with the j-th character of the next string
            for (int i = 0; i < strs.size() - 1; i++) {
                if (strs[i][j] == strs[i + 1][j]) {
                    continue;
                } else {
                    flag = false;
                    break;
                }
            }

            // If all characters at the j-th position match, add the character to the result string
            if (flag) {
                res += strs[0][j];
                j++;
            } else {
                break; // Break the loop if characters don't match
            }
        }

        return res; // Return the longest common prefix
    }
};
