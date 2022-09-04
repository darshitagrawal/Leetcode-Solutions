

int singleNumber(int* nums, int numsSize)
{
    int index = 0, once = 0, twice = 0, thrice = 0;
    
    while(index < numsSize)
    {
        twice |= (once & nums[index]);
        once ^= nums[index];
        
        thrice = once & twice;
        once &= ~thrice;
        twice &= ~thrice;
        index++;
    }
    
    return once;
}