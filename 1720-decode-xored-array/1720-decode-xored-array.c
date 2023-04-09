

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* encoded, int encodedSize, int first, int* returnSize)
{
    int *arr = (int*)calloc(encodedSize + 1, sizeof(int));
    int index = 1;
    
    *returnSize = encodedSize + 1;
    
    arr[0] = first;
    
    while(index < *returnSize)
    {
        arr[index] = encoded[index - 1] ^ arr[index - 1];
        index++;
    }
    
    return arr;
}