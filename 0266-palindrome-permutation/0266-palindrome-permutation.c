

bool canPermutePalindrome(char * s)
{
    int index = 0, OddCount = 0, HashMap[128] = {0};
    bool flag = false;
    
    if(strlen(s) % 2)
    {
        flag = true;
    }
    
    while(index < strlen(s))
    {
        HashMap[s[index]]++;
        index++;
    }
    
    for(index = 0; index < 128; index++)
    {
        if(HashMap[index] % 2)
        {
            OddCount++;
            
            if(!flag || OddCount > 1)
            {
                return false;
            }
        }
    }
    
    return true;
}