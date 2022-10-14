

int xorOperation(int n, int start)
{
    int result = 0, index = 0;
    
    while(index < n)
    {
        result ^= start + 2 * index;
        index++;
    }
    return result;
}