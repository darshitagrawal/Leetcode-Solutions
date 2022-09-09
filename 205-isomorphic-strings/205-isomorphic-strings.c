

bool isIsomorphic(char * s, char * t)
{
    char *hashmap1 = (char*)calloc(128, sizeof(char));
    char *hashmap2 = (char*)calloc(128, sizeof(char));
    
    int index = 0;
    
    while(index < strlen(s))
    {
        if(hashmap1[s[index]] != '\0' && t[index] != hashmap1[s[index]])
        {
            return false;
        }
        if(hashmap2[t[index]] != '\0' && s[index] != hashmap2[t[index]])
        {
            return false;
        }
        
        hashmap1[s[index]] = t[index];
        hashmap2[t[index]] = s[index];
        
        index++;
    }
    
    return true;
}