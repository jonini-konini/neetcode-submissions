class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<char, int> word1;
      unordered_map<char, int> word2;

      for (char c: s) {
        word1[c]++;
      }

      for (char c: t) {
        word2[c]++;
      }

      if (word1 == word2) {
        return true;
      } 

      return false;
 
    }
};
