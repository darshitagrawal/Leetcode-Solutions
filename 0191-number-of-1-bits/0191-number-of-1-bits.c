int hammingWeight(uint32_t n) 
{
    int hamWeight = 0;
    
    while(n)
    {
        if(n & 1 == 1)
        {
            hamWeight++;
        }
        n >>= 1;
    }
    
    return hamWeight;
}