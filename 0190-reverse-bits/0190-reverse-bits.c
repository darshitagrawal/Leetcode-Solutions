uint32_t reverseBits(uint32_t n) 
{
    uint32_t power = 31, bit = 0;
    
    while(n)
    {
        bit |= (n & 1) << power--;
        n >>= 1;
    }   
    
    return bit;
}