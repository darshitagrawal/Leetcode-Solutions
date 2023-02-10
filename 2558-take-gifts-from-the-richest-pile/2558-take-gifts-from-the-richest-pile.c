long long pickGifts(int* gifts, int giftsSize, int k)
{
    int count = 0, index = 0, indexRecord = 0, max = 0;
    unsigned long int giftsSum = 0;

    while(count < k)
    {
        index = 0;
        max = 0;
        
        while(index < giftsSize)
        {
            if(max < gifts[index])
            {
                max = gifts[index];
                indexRecord = index;
            }
            index++;
        }
        
        gifts[indexRecord] = (int)sqrt(gifts[indexRecord]);
        count++;
    }
    
    index = 0;
    
    while(index < giftsSize)
    {
        giftsSum += gifts[index];
        index++;
    }
    
    return giftsSum;
}