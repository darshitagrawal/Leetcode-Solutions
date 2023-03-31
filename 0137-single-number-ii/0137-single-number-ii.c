

int singleNumber(int* nums, int numsSize)
{
    int index = 0, seenOnce = 0, seenTwice = 0;
    
    while(index < numsSize)
    {
        /*If bits appear for the first time we add it to seenOnce and don't add it to seenTwice*/
        seenOnce = ~seenTwice & (seenOnce ^ nums[index]);
        /*If bits appear for the second time, we reomove it from the seenOnce and add it to seenTwice*/
        seenTwice = ~seenOnce & (seenTwice ^ nums[index]);
        
        index++;
        
        /*Note: If bits appear for the third time, we don't add it to seenOnce but remove it from seenTwice*/
    }
    
    /*In the end seenOnce only contains bits that appeared exactly once*/
    return seenOnce;
}