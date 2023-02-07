int binaryGap(int n)
{
    int bit = 0, last = -1, diff = 0;
    
    while(bit < 32)
    {
        if(((n >> bit) & 1) > 0)
        {
            if(last >= 0)
            {
                if(diff < bit - last)
                {
                    diff = bit - last;
                }
            }
            last = bit;
        }
        bit++;
    }
    
    return diff;
}