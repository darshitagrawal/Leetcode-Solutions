

int firstUniqChar(char * s)
{
    int index = 0, character = 0;
    int hashMap[26] = {0};
    
    while(index < strlen(s))
    {
        character = s[index] - 'a';    
        hashMap[character]++;
        index++;
    }
    
    for(index = 0; index < strlen(s); index++)
    {
        character = s[index] - 'a';
        
        if(hashMap[character] == 1)
        {
            return index;
        }
    }
    
    return -1;
}