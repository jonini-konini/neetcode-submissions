class Solution {
public:
    bool isPalindrome(string s) {
        string phrase = clean(s);

        //we are taking "two pointer" literally here :)
        
        char* onepointer = phrase.data();
        char* twopointer = &phrase.back();
        
        //loop stops if the pointers are identical(meaning that theyre at the same character);
        while(onepointer < twopointer) {
            if (*onepointer != *twopointer) {
                return false;
            }
            onepointer++;
            twopointer--;
        }

        return true;
    }


    //this function turns everything to lowercase and removes all non alphanumeric characters so the main logic is simpler
    string clean(string s) {
        string result;

        for (unsigned char c : s) {
            if (isalnum(c)) {
                result += tolower(c);
            }
        }

        return result;
    }
};
