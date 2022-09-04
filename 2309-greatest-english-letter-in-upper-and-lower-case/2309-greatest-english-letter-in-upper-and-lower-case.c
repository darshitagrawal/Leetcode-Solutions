

char * greatestLetter(char * s)
{
    int index = 0, hashmap1[26] = {0}, hashmap2[26] = {0};
    char *result = (char*)calloc(2, sizeof(char));
    
    while(index < strlen(s))
    {
        if(s[index] >= 'A' && s[index] <= 'Z')
        {
            hashmap1[s[index] - 'A']++;
        }
        else
        {
            hashmap2[s[index] - 'a']++;
        }
        index++;
    }
    
    index = 25;
    
    while(index >= 0)
    {
        if(hashmap1[index] && hashmap2[index])
        {
            result[0] = index + 'A';
            result[1] = '\0';
            
            return result;
        }
        index--;
    }
    
    return "";
}