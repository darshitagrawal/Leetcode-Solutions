int pivotInteger(int n)
{
    if(n == 1)
    {
        return 1;
    }
    
    int sum1 = 0, sum2 = 0, index1 = 1, index2 = n;
    
    while(index1 <= n)
    {
        sum1 += index1;
        index1++;
    }
    
    while(index2 >= 1)
    {
        sum1 -= index2;
        
        if(sum1 == sum2)
        {
            return index2;
        }
        
        sum2 += index2;
        index2--;
    }
    
    return -1;
    
}