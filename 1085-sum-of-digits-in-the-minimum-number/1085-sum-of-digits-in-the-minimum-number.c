int sumOfDigits(int* nums, int numsSize) 
{
    int min = INT_MAX, index = 0, sum = 0;
    
    while(index < numsSize)
    {
        if(min > nums[index])
        {
            min = nums[index];
        }
        index++;
    }
    
    while(min)
    {
        sum += (min % 10);
        min = min / 10;
    }
    
    if(sum % 2)
    {
        return 0;
    }
    
    return 1;
}