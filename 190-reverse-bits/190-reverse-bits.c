uint32_t reverseBits(uint32_t n) 
{
    uint32_t power = 31, bit = 0;
    uint32_t ret = 0;
    
    while(n != 0)
    {
        bit = n & 1;
        n >>= 1;
        
        ret += bit << power;
        power--;
    }
    
    return ret;
}