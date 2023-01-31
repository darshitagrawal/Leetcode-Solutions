bool judgeCircle(char * moves)
{
    uint32_t horizontal = 0, vertical = 0, index = 0;
    
    while(index < strlen(moves))
    {
        if(moves[index] == 'R')
        {
            horizontal++;
        }
        else if(moves[index] == 'L')
        {
            horizontal--;
        }
        else if(moves[index] == 'U')
        {
            vertical++;
        }
        else if(moves[index] == 'D')
        {
            vertical--;
        }
        
        index++;
    }
    
    if(horizontal == 0 && vertical == 0)
    {
        return true;
    }
    
    return false;
}