bool threeConsecutiveOdds(int* arr, int arrSize) 
{
    int index = 0, product = 0;
    
    while(index < arrSize - 2)
    {
        product = arr[index] * arr[index + 1] * arr[index + 2];
        
        if(product % 2)
        {
            return true;
        }
        index++;
    }
    
    return false;
}