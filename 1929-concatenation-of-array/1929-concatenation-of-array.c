/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize)
{
    int *ans = (int*)calloc(2 * numsSize, sizeof(int));
    
    memcpy(ans, nums, numsSize * sizeof(int));
    memcpy(ans + numsSize, nums, numsSize * sizeof(int));
    
    *returnSize = 2 * numsSize;
    
    return ans;
}