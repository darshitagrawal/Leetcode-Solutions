int smallestNumber(int n) 
{
    int sum = 0, product = 1;
    
    while(n)
    {
        sum += product;
        product *= 2;
        n >>= 1;
    }
    
    return sum;
}