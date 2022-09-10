

int minEatingSpeed(int* piles, int pilesSize, int h)
{
    int index = 0, hourSpent = 0, left = 1, right = 0, middle = 0;
    
    while(index < pilesSize)
    {
        if(right < piles[index])
        {
            right = piles[index];
        }
        index++;
    }
    
    while(left < right)
    {
        middle = (left + right) / 2;
        index = 0;
        hourSpent = 0;
        
        while(index < pilesSize)
        {
            hourSpent += (piles[index] / middle) + (piles[index] % middle != 0);
            index++;
        }
        
        if(hourSpent <= h)
        {
            right = middle;
        }
        else
        {
            left = middle + 1;
        }
    }
    
    return right;
}