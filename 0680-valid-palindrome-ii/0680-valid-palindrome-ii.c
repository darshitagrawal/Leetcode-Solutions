bool checkPalindrome(char *s, int start, int end)
{
    while(start < end)
    {
        if(s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    
    return true;
}

bool validPalindrome(char * s)
{
    int start = 0, end = strlen(s) - 1;
    
    while(start < end)
    {
        if(s[start] != s[end])
        {
            return (checkPalindrome(s, start + 1, end) || checkPalindrome(s, start, end - 1));
        }
        start++;
        end--;
    }
    
    return true;
}