

int pivotIndex(int* nums, int numsSize)
{
    int index = 0, leftSum = 0, sum = 0;
    
    while(index < numsSize)
    {
        sum += nums[index];
        index++;
    }
    index = 0;
    
    while(index < numsSize)
    {
        if(leftSum == sum - nums[index] - leftSum)
        {
            return index;
        }
        leftSum += nums[index];
        index++;
    }
    
    return -1;
}