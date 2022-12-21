bool isCircularSentence(char * sentence)
{
    char FirstLetter = sentence[0];
    int index = 0;
    
    while(sentence[index] != '\0')
    {
        if(sentence[index] == ' ')
        {
            if(sentence[index - 1] != sentence[index + 1])
            {
                return false;
            }
        }
        
        index++;
    }
    
    if(sentence[index - 1] != FirstLetter)
    {
        return false;
    }
    
    return true;
}