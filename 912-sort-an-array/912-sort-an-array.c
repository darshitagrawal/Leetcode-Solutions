

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int cmpfunc(const void* a,const void* b)
{
    return (*(int*)a - *(int*)b);
}

int* sortArray(int* nums, int numsSize, int* returnSize)
{
    int *result = (int*)calloc(numsSize,sizeof(int));
    memmove(result, nums, sizeof(int) * numsSize);
    qsort(result, numsSize, sizeof(int), cmpfunc);
    
    *returnSize = numsSize;
    
    return result;
}