bool checkPerfectNumber(int num)
{
    if(num <= 0)
    {
        return false;
    }
    
    int sum = 0, divisor = 1;
    
    while(divisor * divisor <= num)
    {
        if(num % divisor == 0)
        {
            sum += divisor;
            
            if(divisor * divisor != num)
            {
                sum += num / divisor;
            }
        }
        divisor++;
    }
    
    return (sum - num == num);
}