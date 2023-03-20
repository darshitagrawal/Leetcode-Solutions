int countPrimes(int n)
{
    if(n <= 2)
    {
        return 0;
    }
    
    int *isPrime = (int*)calloc(n, sizeof(int));
    int upper = 2, lower = 0, result = 0;
    int sqrt_n = sqrt(n);
    
    memset(isPrime, 1, sizeof(isPrime));
    
    for(upper = 2; upper <= sqrt_n; upper++)
    {
        if(!isPrime[upper])
        {
            for(lower = upper * upper; lower < n; lower += upper)
            {
                isPrime[lower] = -1;
            }
        }
    }
    
    for(upper = 2; upper < n; upper++)
    {
        if(!isPrime[upper])
        {
            result++;
        }
    }
    
    return result;    
}