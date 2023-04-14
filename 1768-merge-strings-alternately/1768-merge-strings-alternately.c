

char * mergeAlternately(char * word1, char * word2)
{
    char *result = (char*)calloc(strlen(word1) + strlen(word2) + 1, sizeof(char));
    int word1Index = 0, word2Index = 0, resultIndex = 0;
    
    while(word1Index < strlen(word1) || word2Index < strlen(word2))
    {
        if(word1Index < strlen(word1))
        {
            result[resultIndex++] = word1[word1Index++];
        }
        if(word2Index < strlen(word2))
        {
            result[resultIndex++] = word2[word2Index++];
        }
    }
    
    return result;
}