

char * reverseVowels(char * s)
{
    int count = 0, index = 0;
    
    while(index < strlen(s))
    {
        if(s[index] == 'a' || s[index] == 'e' ||
          s[index] == 'i' || s[index] == 'o' || 
          s[index] == 'u' || s[index] == 'A' || 
          s[index] == 'E' || s[index] == 'I' ||
          s[index] == 'O' || s[index] == 'U' )
        {
            count++;
        }
        
        index++;
    }
    
    index = 0;
    char *result = (char*)calloc(count + 1, sizeof(char));
    count = 0;
    
    while(index < strlen(s))
    {
        if(s[index] == 'a' || s[index] == 'e' ||
          s[index] == 'i' || s[index] == 'o' || 
          s[index] == 'u' || s[index] == 'A' || 
          s[index] == 'E' || s[index] == 'I' ||
          s[index] == 'O' || s[index] == 'U' )
        {
            result[count++] = s[index];
        }
        index++;
    }
    
    index = 0;
    
    while(index < strlen(s))
    {
        if(s[index] == 'a' || s[index] == 'e' ||
          s[index] == 'i' || s[index] == 'o' || 
          s[index] == 'u' || s[index] == 'A' || 
          s[index] == 'E' || s[index] == 'I' ||
          s[index] == 'O' || s[index] == 'U' )
        {
            s[index] = result[--count];
        }
        index++;
    }
    
    return s;
}