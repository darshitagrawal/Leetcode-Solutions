char * removeDuplicates(char * s)
{
    char *result = (char*)calloc(strlen(s), sizeof(char));
    int sIndex = 0, resultIndex = 0;
    
    while(sIndex < strlen(s))
    {
        if(resultIndex != 0 && s[sIndex] == result[resultIndex - 1])
        {
            resultIndex--;
        }
        else
        {
            result[resultIndex] = s[sIndex];
            resultIndex++;
        }
        
        sIndex++;
    }
    
    result[resultIndex] = '\0';
    
    return result;
}