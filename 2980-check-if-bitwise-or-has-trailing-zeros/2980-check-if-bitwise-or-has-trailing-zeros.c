bool hasTrailingZeros(int* nums, int numsSize) 
{
    int count = 0, divisor = 2, index = 0;
    
    while(index < numsSize)
    {
        if(nums[index] % divisor == 0)
        {
            count++;
            
            if(count > 1)
            {
                return true;
            }
        }
        index++;
    }
    
    return false;
}