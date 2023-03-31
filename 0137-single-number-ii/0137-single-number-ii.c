

int singleNumber(int* nums, int numsSize)
{
    int index = 0, seenOnce = 0, seenTwice = 0;
    
    while(index < numsSize)
    {
        seenOnce = ~seenTwice & (seenOnce ^ nums[index]);
        seenTwice = ~seenOnce & (seenTwice ^ nums[index]);
        
        index++;
    }
    
    return seenOnce;
}