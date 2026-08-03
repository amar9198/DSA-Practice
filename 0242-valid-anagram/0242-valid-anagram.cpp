
class Solution {
public:
    bool isAnagram(string s, string t) {
    if (s.length() != t.length()) 
        return false;

    int freq[26] = {0};

    for (int i = 0; i < s.length(); i++) {
       freq[s[i] - 'a']++;
    }

    for (int i = 0; i < t.length(); i++) {
        freq[t[i] - 'a']--;  // Decrement frequency for each character in str2
    }

    // Check if all frequencies are zero, meaning both strings have the same characters
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0)  // If any frequency is non-zero, they are not anagrams
            return false;
    }

    return true;  // The strings are anagrams
}
};