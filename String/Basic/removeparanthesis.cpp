


/**
 * @class Solution
 * @brief A class that provides a method to remove the outermost parentheses from a given string.
 */
class Solution {
public:
    /**
     * @brief Removes the outermost parentheses from the given string.
     * 
     * The method iterates through the characters of the string and keeps track of the count of open and close parentheses.
     * It skips the outermost parentheses and appends the remaining characters to the result string.
     * 
     * @param s The input string containing parentheses.
     * @return The string with the outermost parentheses removed.
     */
    string removeOuterParentheses(string s) {
        string res="";
        int count=0;
        int size=s.size();
        for(int i=0;i<size;i++){
            if(s[i]=='(')
                count++;
            else
                count--;
                
            if((count==1 && s[i]=='(') || (count==0 && s[i]==')')) 
                continue;
            else
                res+=s[i];
        }
        return res;
    }
};