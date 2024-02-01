

/**
 * @brief This class provides a solution to determine if two strings are isomorphic.
 * 
 * The isIsomorphic function takes two strings as input and checks if they are isomorphic.
 * Two strings are considered isomorphic if the characters in one string can be replaced to get the other string.
 * The function uses two unordered maps to keep track of character mappings between the two strings.
 * It iterates through the strings and checks if the mappings are consistent.
 * If any inconsistency is found, the function returns false.
 * If the iteration completes without finding any inconsistency, the function returns true.
 */
class Solution {
public:
    /**
     * @brief Determines if two strings are isomorphic.
     * 
     * @param s The first string.
     * @param t The second string.
     * @return True if the strings are isomorphic, false otherwise.
     */
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp, mp2;
        for (int i=0; i<s.length(); ++i) {
            if (mp[s[i]] && mp[s[i]]!=t[i]) return false;
            if (mp2[t[i]] && mp2[t[i]]!=s[i]) return false;
            mp[s[i]]=t[i];
            mp2[t[i]]=s[i];
        }
        return true;
    }
};

//dry run
Certainly! Let's perform a dry run of the given code with an example:

```cpp
Solution sol;
bool result = sol.isIsomorphic("egg", "add");
```

**Initialization:**
- `mp` and `mp2` are initially empty unordered maps.

**First Iteration (i=0):**
- `s[0]` is 'e', and `t[0]` is 'a'.
  - `mp['e']` is empty, so we set `mp['e'] = 'a'`.
  - `mp2['a']` is empty, so we set `mp2['a'] = 'e'`.

**Second Iteration (i=1):**
- `s[1]` is 'g', and `t[1]` is 'd'.
  - `mp['g']` is empty, so we set `mp['g'] = 'd'`.
  - `mp2['d']` is empty, so we set `mp2['d'] = 'g'`.

**Third Iteration (i=2):**
- `s[2]` is 'g', and `t[2]` is 'd'.
  - `mp['g']` is 'd', which matches `t[2]`. Continue.
  - `mp2['d']` is 'g', which matches `s[2]`. Continue.

**Result:**
- The loop completes without any false condition.
- The function returns `true`, indicating that the strings "egg" and "add" are isomorphic.

In this example, the code successfully establishes a one-to-one correspondence between the characters in the two strings, confirming that they are isomorphic.