/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize)
{
    int index = 0, xor = 0, xor0 = 0, xor1 = 0, rightmostbit = 0;
    int *result = (int*)calloc(2, sizeof(int));
    *returnSize = 2;
    
    while(index < numsSize)
    {
        xor ^= nums[index] ^ index;
        index++;
    }
    xor ^= index;
    
    rightmostbit = xor & ~(xor - 1);
    
    for(index = 0; index < numsSize; index++)
    {
        if(nums[index] & rightmostbit)
        {
            xor1 ^= nums[index];
        }
        else
        {
            xor0 ^= nums[index];
        }
    }
    
    for(index = 0; index <= numsSize; index++)
    {
        if(index & rightmostbit)
        {
            xor1 ^= index;
        }
        else
        {
            xor0 ^= index;
        }
    }
    
    for(index = 0; index < numsSize; index++)
    {
        if(xor0 == nums[index])
        {
            result[0] = xor0;
            result[1] = xor1;
            return result;
        }
    }
    
    result[0] = xor1;
    result[1] = xor0;
    
    return result; 
}