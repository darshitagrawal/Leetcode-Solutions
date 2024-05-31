void reverse(char* s, int start, int end) 
{
    while (start < end) 
    {
        char tmp = s[start];
        s[start] = s[end];
        s[end] = tmp;
        start++;
        end--;
    }
}

char * reverseStr(char * s, int k)
{
    int start = 0, begin = 0, end = 0;
    
    for(start = 0; start < strlen(s); start += 2 * k)
    {
        begin = start;
        end = (start + k - 1 < strlen(s)) ? start + k - 1: strlen(s) - 1;
        reverse(s, start, end);
    }
    
    return s;
}