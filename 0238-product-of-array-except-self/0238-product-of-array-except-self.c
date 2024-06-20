/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize)
{
    int *result = (int*)calloc(numsSize, sizeof(int));
    int index = 1, right = 1;
    result[0] = 1;
    
    while(index < numsSize)
    {
        result[index] = result[index - 1] * nums[index - 1];
        index++;
    }
    
    for(index = numsSize - 1; index >= 0; index--)
    {
        result[index] = result[index] * right;
        right *= nums[index];
    }
    
    *returnSize = numsSize;
    
    return result;
}