

int findComplement(int num)
{
    long todo = (long)num, bit = 1;
    
    while(todo)
    {
        num ^= bit;   
        todo >>= 1;
        bit <<= 1;
    }
    
    return num;
}