int minBitFlips(int start, int goal)
{
    int xorResult = 0, count = 0;
    
    xorResult = start ^ goal;
    
    while(xorResult)
    {
        if(xorResult & 1)
        {
            count++;
        }
        xorResult >>= 1;
    }
    
    return count;
}