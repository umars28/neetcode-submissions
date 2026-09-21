class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> firstLetter;
        unordered_map<char, int> secondLetter;

        for(int i = 0; i < s.length(); i++) {
            firstLetter[s[i]] += 1;
            secondLetter[t[i]] += 1;
        }
        
        return firstLetter == secondLetter;
    }
};
