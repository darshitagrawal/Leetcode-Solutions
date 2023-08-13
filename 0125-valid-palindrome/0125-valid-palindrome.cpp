class Solution {
public:
    bool isPalindrome(string s) {
        for(int start = 0, end = s.size() - 1; start < end; start++, end--)
        {
            while(start < end && !isalnum(s[start]))
            {
                start++;
            }
            while(start < end && !isalnum(s[end]))
            {
                end--;
            }
            
            if(tolower(s[start]) != tolower(s[end]))
            {
                return false;
            }
        }
        
        return true;
    }
};