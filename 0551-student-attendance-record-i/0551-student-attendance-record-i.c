bool checkRecord(char * s)
{
    uint16_t strlength = strlen(s);
    uint16_t count = 0, absent = 0, late = 0;
    
    while(count < strlen(s))
    {
        if(s[count] == 'A')
        {
            absent++;
            late = 0;
            if(absent >= 2)
            {
                return false;
            }
        }
        else if(s[count] == 'L')
        {
            late++;
            if(late >= 3)
            {
                return false;
            }
        }
        else
        {
            late = 0;
        }
        count++;
    }
    
    return true;
}