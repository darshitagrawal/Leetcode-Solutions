bool hasAlternatingBits(int n)
{   
    int currentBit = n % 2;
    
    n = n / 2;
    
    while(n)
    {
        if(currentBit == (n % 2))
        {
            return false;
        }
        
        currentBit = n % 2;
        n /= 2;
    }
    
    return true;
}