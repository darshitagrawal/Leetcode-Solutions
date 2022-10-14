

int balancedStringSplit(char * s)
{
    int index = 0, count = 0, lcount = 0, rcount = 0;
    
    while(index < strlen(s))
    {
        if(s[index] == 'R')
        {
            rcount++;
        }
        else
        {
            lcount++;
        }
        
        if(rcount == lcount)
        {
            count++;
            rcount = 0;
            lcount = 0;
        }
        index++;
    }
    
    return count;
}