

int countAsterisks(char * s)
{
    int barCount = 0, astCount = 0, index = 0;
    
    while(index < strlen(s))
    {
        if(s[index] == '|')
        {
            barCount++;
        }
        else if(s[index] == '*')
        {
            if(barCount % 2 == 0)
            {
                astCount++;
            }
        }
        index++;
    }
    
    return astCount;
}