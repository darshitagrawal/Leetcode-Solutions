

bool isAnagram(char * s, char * t)
{
    int Sletters[26] = {0}, Tletters[26] = {0};
    int index = 0, ascii = 0;
    
    if(strlen(s) != strlen(t))
    {
        return false;
    }
    
    while(index < strlen(s))
    {
        ascii = s[index] - 97;
        Sletters[ascii]++;
        index++;
    }
    
    index = 0;
    ascii = 0;
    
    while(index < strlen(t))
    {
        ascii = t[index] - 97;
        Tletters[ascii]++;
        index++;
    }
    
    index = 0;
    
    while(index < 26)
    {
        if(Sletters[index] != Tletters[index])
        {
            return false;
        }
        index++;
    }
    
    return true;
}