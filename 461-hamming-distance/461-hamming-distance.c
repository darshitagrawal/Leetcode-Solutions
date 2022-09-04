

int hammingDistance(int x, int y)
{
    int result = 0, count = 0;
    
    result = x ^ y;
    while(result)
    {
        count += (result & 1);
        result >>= 1;
    }
    
    return count;
}