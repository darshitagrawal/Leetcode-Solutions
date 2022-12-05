bool detectCapitalUse(char * word)
{
    if(isupper(*word) && isupper(word[1]))
    {
        while(isupper(*(++word)))
        {
            ;
        }
    }
    else
    {
        while(islower(*(++word)))
        {
            ;
        }
    }
    
    return (*word == '\0');
}