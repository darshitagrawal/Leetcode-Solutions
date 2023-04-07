

int countSegments(char * s)
{
    int segCount = 0, index = 0;
    
    while(index < strlen(s))
    {
        if((index == 0 || s[index - 1] == ' ') && (s[index] != ' '))
        {
            segCount++;
        }
        
        index++;
    }
    
    return segCount;
}