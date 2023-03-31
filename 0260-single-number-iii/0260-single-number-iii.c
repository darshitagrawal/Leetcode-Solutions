

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumber(int* nums, int numsSize, int* returnSize)
{
    int *result = (int*)calloc(2, sizeof(int));
    
    result[0] = 0;
    result[1] = 0;
    
    long long xy = 0, index = 0;
    
    while(index < numsSize)
    {
        xy ^= nums[index];
        index++;
    }
    
    xy &= -(xy);
    index = 0;
    
    while(index < numsSize)
    {
        if(xy & nums[index])
        {
            result[0] ^= nums[index];
        }
        else
        {
            result[1] ^= nums[index];
        }
        
        index++;
    }
    
    *returnSize = 2;
    
    return result;
}