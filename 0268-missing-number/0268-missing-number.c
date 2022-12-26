

int missingNumber(int* nums, int numsSize)
{
    int result = 0, index = 0;
    
    while(index < numsSize)
    {
        result ^= nums[index] ^ index;
        index++;
    }
    
    result ^= index;
    
    return result;
}