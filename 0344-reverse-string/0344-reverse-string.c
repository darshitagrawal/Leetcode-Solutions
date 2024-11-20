void reverse(char *s, int left, int right)
{
    char swap = '\0';
    
    if(left >= right)
    {
        return;
    }
    
    swap = s[left];
    s[left] = s[right];
    s[right] = swap;
    
    reverse(s, left + 1, right - 1);
}

void reverseString(char* s, int sSize)
{
    int left = 0, right = sSize - 1;
    
    reverse(s, left, right);
}

