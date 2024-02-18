// class Solution {
// public:
//     string frequencySort(string s) {
//         vector<char> string_vector(s.begin(), s.end());
//         reverse(string_vector.begin(), string_vector.end());
//         string reversed_string(string_vector.begin(), string_vector.end());
//         return reversed_string;
//     }
// };


//most optimize
// v.v.imp to visdit leetcode solution for this question 
class Solution {
public:
    string frequencySort(string s) {
        vector<int> freq(62, 0);
        priority_queue<pair<int, char>> pq;
        string ans = "";

        // count character frequency
        for(auto ch: s){
            // is Digit
            if(ch < 'A') freq[52 + ch - '0']++;
            // is Uppercase
            else if(ch <= 'Z') freq[ch - 'A']++;
            // is Lowercase
            else freq[26 + ch - 'a']++;
        }

        // push from map to vector 
        for(int i=0; i<freq.size(); i++){
            if(freq[i] == 0) continue;
            // Uppercase
            if(i < 26) pq.push({freq[i], char(65 + i)});
            // Lowercase
            else if(i < 52) pq.push({freq[i], char(97 + (i - 26))});
            // Digit
            else pq.push({freq[i], char(48 + (i - 52))});
        }

        // add to final answer string
        while(!pq.empty()){
            pair<int, char> cur = pq.top();
            pq.pop();
            while(cur.first--) ans += cur.second;
        }
        return ans;
    }
};