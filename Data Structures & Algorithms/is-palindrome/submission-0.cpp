class Solution {
public:
    bool isPalindrome(string s) {

        int i = 0;
    int j = s.size() - 1;

    while(i < j) {

        // skip non-alphanumeric from left
        if(!isalnum(s[i])) {
            i++;
            continue;
        }

        // skip non-alphanumeric from right
        if(!isalnum(s[j])) {
            j--;
            continue;
        }

        // compare (case-insensitive)
        if(tolower(s[i]) != tolower(s[j])) {
            return false;
        }

        i++;
        j--;
    }

    return true;
    }
};
