

void reverseString(char* s, int sSize)
{
    int start = 0, end = sSize - 1;
    char swap = '\0';
    
    while(start < end)
    {
        swap = s[start];
        s[start] = s[end];
        s[end] = swap;
        
        start++;
        end--;
    }
}