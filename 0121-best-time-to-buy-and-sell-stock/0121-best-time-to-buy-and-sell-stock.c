

int maxProfit(int* prices, int pricesSize)
{
    int minPrice = INT_MAX, maxProfit = 0, index = 0;
    
    while(index < pricesSize)
    {
        if(minPrice > prices[index])
        {
            minPrice = prices[index];
        }
        
        if(prices[index] - minPrice > maxProfit)
        {
            maxProfit = prices[index] - minPrice;
        }
        
        index++;
    }
    
    return maxProfit;
}