

int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    int index = 0, count = 0, max = 0;
    
    while(index < numsSize)
    {
        if(nums[index] != 1)
        {
            count = 0;
        }
        else if(nums[index])
        {
            count++;
        }
        if(max < count)
        {
            max = count;
        }
        index++;
    }
    
    return max;
}