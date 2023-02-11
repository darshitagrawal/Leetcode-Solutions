/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize)
{
    int *answer = (int*)calloc(numsSize, sizeof(int));
    int index = 1, right = 1;
    
    answer[0] = 1;
    
    while(index < numsSize)
    {
        answer[index] = nums[index - 1] * answer[index - 1];
        index++;
    }
    
    for(index = numsSize - 1; index >= 0; index--)
    {
        answer[index] = answer[index] * right;
        right *= nums[index];
    }
    
    *returnSize = numsSize;
    return answer;
}