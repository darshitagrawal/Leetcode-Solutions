void reverse(char *word, int index)
{
    int idx = 0;
    
    while(index > idx)
    {
        char swap = word[idx];
        word[idx] = word[index];
        word[index] = swap;
        
        index--;
        idx++;
    }
}

char* reversePrefix(char* word, char ch) 
{
    int index = 0;
    
    while(index < strlen(word))
    {
        if(word[index] == ch)
        {
            reverse(word, index);
            break;
        }
        
        index++;
    }
    
    return word;
}