int hammingWeight(uint32_t n) 
{
    uint32_t hamWeight = 0;
    
    while(n)
    {
        n &= (n - 1);
        hamWeight++;
    }
    
    return hamWeight;
}