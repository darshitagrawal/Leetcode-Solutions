/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) 
{
    int index = 1, right = 1;
    int *result = (int*)calloc(numsSize, sizeof(int));
    
    result[0] = 1;
    
    while(index < numsSize)
    {
        result[index] = result[index - 1] * nums[index - 1];
        index++;
    }
    
    index = numsSize - 1;
    
    while(index >= 0)
    {
        result[index] = result[index] * right;
        right *= nums[index];
        index--;
    }
    
    *returnSize = numsSize;
    return result;
}