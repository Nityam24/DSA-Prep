


/**
 * @brief This class provides a solution to determine if a string can be obtained by rotating another string.
 */
class Solution {
public:
    /**
     * @brief Checks if a string can be obtained by rotating another string.
     * @param s The original string.
     * @param goal The string to check if it can be obtained by rotating the original string.
     * @return True if the string can be obtained by rotating the original string, false otherwise.
     */
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }

        string doubledS = s + s;
        return doubledS.find(goal) != string::npos;
    }
};