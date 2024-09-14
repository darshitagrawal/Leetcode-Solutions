int hammingWeight(uint32_t n) 
{
    int hamWeight = 0;
    
    while(n)
    {
        n &= (n - 1);
        hamWeight++;
    }
    
    return hamWeight;
}