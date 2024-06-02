int scoreOfString(char* s) 
{
    int index = 0, diff = 0, score = 0;
    
    while(index + 1 < strlen(s))
    {
        diff = s[index] - s[index + 1];
        
        if(diff < 0)
        {
            diff *= -1;
        }
        score += diff;
        
        index++;
    }
    
    return score;
}