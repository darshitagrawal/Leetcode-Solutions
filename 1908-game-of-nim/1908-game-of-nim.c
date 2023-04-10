bool nimGame(int* piles, int pilesSize)
{
    int index = 0, nimSum = 0;
    
    while(index < pilesSize)
    {
        nimSum ^= piles[index];
        index++;
    }
    
    return (nimSum != 0);
}