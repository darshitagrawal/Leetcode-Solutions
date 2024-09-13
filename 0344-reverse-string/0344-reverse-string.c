void reverse(char str[], int left, int right)
{
    if(left >= right)
    {
        return;
    }
    
    char swap = str[left];
    str[left] = str[right];
    str[right] = swap;
    
    reverse(str, left + 1, right - 1);
}

void reverseString(char* s, int sSize)
{
    int left = 0, right = sSize - 1;
    
    reverse(s, left, right);
}

