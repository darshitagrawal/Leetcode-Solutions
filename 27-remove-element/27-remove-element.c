

int removeElement(int* nums, int numsSize, int val)
{
    int fastIndex = 0, slowIndex = 0;
    
    while(fastIndex < numsSize)
    {
        if(nums[fastIndex] != val)
        {
            nums[slowIndex] = nums[fastIndex];
            slowIndex++;
        }
        fastIndex++;
    }
    
    return slowIndex;
}