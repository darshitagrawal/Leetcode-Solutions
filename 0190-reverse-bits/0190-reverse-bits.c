uint32_t reverseBits(uint32_t n) 
{
    int power = 31, bit = 0;
    
    while(n)
    {
        bit |= (n & 1) << power;
        power--;
        n >>= 1;
    }
    
    return bit;
}