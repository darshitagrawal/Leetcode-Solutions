/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize)
{
    int *result = (int*)calloc(n + 1, sizeof(int));
    int index = 0;
    
    result[index++] = 0;
    
    while(index < n + 1)
    {
        result[index] = result[index & (index - 1)] + 1;
        index++;
    }
    
    *returnSize = n + 1;
    return result;
}