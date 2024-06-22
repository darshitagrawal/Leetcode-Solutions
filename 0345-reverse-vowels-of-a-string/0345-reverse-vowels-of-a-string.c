bool isVowel(char c) 
{
        return c == 'a' || c == 'i' || c == 'e' || c == 'o' || c == 'u'
            || c == 'A' || c == 'I' || c == 'E' || c == 'O' || c == 'U';
}

char * reverseVowels(char * s)
{
    int start = 0, end = strlen(s) - 1;
    
    while(start < end)
    {
        while(start < strlen(s) && !isVowel(s[start]))
        {
            start++;
        }
        while(end >= 0 && !isVowel(s[end]))
        {
            end--;
        }
        
        if(start < end)
        {
            char swap = s[start];
            s[start] = s[end];
            s[end] = swap;
            
            start++;
            end--;
        }
    }
    return s;
}