int timeRequiredToBuy(int* tickets, int ticketsSize, int k) 
{
    int index = 0, time = 0;
    
    if(tickets[k] == 1)
    {
        return k + 1;
    }
    
    while(tickets[k] != 0)
    {
        for(index = 0; index < ticketsSize; index++)
        {
            if(tickets[index] != 0)
            {
                tickets[index]--;
                time++;
            }
            
            if(tickets[k] == 0)
            {
                return time;
            }
        }
    }
    
    return time;
}