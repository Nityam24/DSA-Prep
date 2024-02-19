

/**
 * @class Solution
 * @brief Class that converts a Roman numeral string to an integer value.
 */
class Solution {
public:
    /**
     * @brief Converts a Roman numeral string to an integer value.
     * @param s The Roman numeral string to be converted.
     * @return The integer value equivalent of the Roman numeral string.
     */
    int romanToInt(string s) {
        unordered_map<char, int> m;
        
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        int ans = 0;
        
        for(int i = 0; i < s.length(); i++){
            if(m[s[i]] < m[s[i+1]]){
                ans -= m[s[i]];
            }
            else{
                ans += m[s[i]];
            }
        }
        return ans;
    }
};