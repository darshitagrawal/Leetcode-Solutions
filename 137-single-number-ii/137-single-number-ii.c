

int singleNumber(int* nums, int numsSize)
{
    int index = 0, once = 0, twice = 0, thrice = 0;
    
    while(index < numsSize)
    {
        //Counting bits occurring twice or thrice
        twice |= (once & nums[index]);
        //Counting bits occurring once or thrice
        once ^= nums[index];
        //Counting bits occurring thrice
        thrice = once & twice;
        //Eliminating bits occurring thrice from once
        once &= ~thrice;
        //Eliminating bits occurring thrice from twice
        twice &= ~thrice;
        //Incrementing the index
        index++;
    }
    
    return once;
}