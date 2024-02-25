

int trailingZeroes(int n)
{
    int zeroCount = 0;
    long currMultiple = 5;
    
    while(n >= currMultiple)
    {
        zeroCount += (n / currMultiple);
        currMultiple *= 5;
    }
    
    return zeroCount;
}