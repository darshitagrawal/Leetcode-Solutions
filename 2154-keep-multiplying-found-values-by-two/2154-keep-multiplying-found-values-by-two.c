

int findFinalValue(int* nums, int numsSize, int original)
{
    int index = 0;
    
    while(index < numsSize)
    {
        if(original == nums[index])
        {
            original *= 2;
            index = 0;
        }
        else
        {
            index++;
        }
    }
    
    return original;
}