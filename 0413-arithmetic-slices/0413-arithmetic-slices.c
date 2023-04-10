int numberOfArithmeticSlices(int* nums, int numsSize)
{
    int index = 2, count = 0, sum = 0;
    
    while(index < numsSize)
    {
        if(nums[index] - nums[index - 1] == nums[index - 1] - nums[index - 2])
        {
            count++;
        }
        else
        {
            sum += (count * (count + 1)) / 2;
            count = 0;
        }
        
        index++;
    }
    
    return (sum += (count * (count + 1)) / 2);
}