

int findComplement(int num)
{
    long todo = (long)num, bit = 1;
    
    while(todo)
    {
        num ^= bit;   
        bit <<= 1;
        todo >>= 1;
    }
    
    return num;
}