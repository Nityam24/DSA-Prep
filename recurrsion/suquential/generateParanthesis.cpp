/**
 * @class Solution
 * @brief Class that generates all valid combinations of parentheses.
 *
 * The Solution class provides a method, `generateParenthesis`, that takes an integer `n` as input and returns a vector of strings containing all valid combinations of parentheses with `n` pairs.
 * The class uses a recursive helper function, `helper`, to generate the combinations. The helper function takes a string `s`, representing the current combination, and two integers `open` and `close`, representing the number of remaining open and close parentheses.
 * The helper function uses backtracking to explore all possible combinations. It adds an open parenthesis to the string if there are remaining open parentheses, and recursively calls itself with `open` decremented. It then adds a close parenthesis to the string if there are remaining close parentheses and the count of open parentheses in the string is less than the count of close parentheses. It recursively calls itself with `close` decremented. When there are no remaining open or close parentheses, the current combination is added to the result vector.
 * The `generateParenthesis` method initializes an empty string and the result vector, and calls the helper function with `n` as the initial count of open and close parentheses.
 */
class Solution {
public:

    void helper(string &s, int open, int close, vector<string> &res){

        if(open == 0 and close == 0){     // base case
            res.push_back(s);
        }

        if(open > 0){
            s.push_back('(');
            helper(s, open - 1, close, res);    // magical assumption
            s.pop_back();    // backtracking step
        }

        if(close > 0 and open < close){  // cnt of '(' in s is >= ')'
            s.push_back(')');
            helper(s, open, close - 1, res);    // magical assumption
            s.pop_back();    // backtracking step
        }
    }

    vector<string> generateParenthesis(int n) {
        
        vector<string> res;
        string s = "";
        helper(s, n, n, res);

        return res;
    }
};