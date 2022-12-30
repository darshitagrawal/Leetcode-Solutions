int maxProfit(int* prices, int pricesSize)
{
    int index = 1, maxProfit = 0;
    
    while(index < pricesSize)
    {
        if(prices[index] > prices[index - 1])
        {
            maxProfit += prices[index] - prices[index - 1];
        }
        index++;
    }
    
    return maxProfit;
}