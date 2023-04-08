/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize)
{
    int index = arrSize - 1, temp = 0, max = -1;
    
    while(index >= 0)
    {
        temp = arr[index];
        arr[index] = max;
        max = (temp > max) ? temp : max;
        index--;
    }
    
    *returnSize = arrSize;
    
    return arr;
}