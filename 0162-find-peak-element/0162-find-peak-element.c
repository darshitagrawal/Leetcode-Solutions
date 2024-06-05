int findPeakElement(int* nums, int numsSize)
{
    int index = 0;
    
    while(index < numsSize - 1)
    {
        if(nums[index] > nums[index + 1])
        {
            return index;
        }
        
        index++;
    }
    
    return (numsSize - 1);
}