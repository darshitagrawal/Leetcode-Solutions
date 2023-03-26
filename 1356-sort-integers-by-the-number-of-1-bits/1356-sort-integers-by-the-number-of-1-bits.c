/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int setBits(int num)
{
    int count = 0;
    
    while(num)
    {
        num &= (num - 1);
        count++;
    }
    
    return count;
}

int* sortByBits(int* arr, int arrSize, int* returnSize)
{
    int *result = (int*)calloc(arrSize, sizeof(int));
    int index = 0, swap = 0;
    
    while(index < arrSize)
    {
        result[index] = setBits(arr[index]);
        index++;
    }
    
    for(index = 0; index < arrSize - 1; index++)
    {
        for(int sub_index = 0; sub_index < arrSize - index - 1; sub_index++)
        {
            if(result[sub_index] > result[sub_index + 1] || 
               result[sub_index] == result[sub_index + 1] && 
              arr[sub_index] > arr[sub_index + 1])
            {
                swap = arr[sub_index];
                arr[sub_index] = arr[sub_index + 1];
                arr[sub_index + 1] = swap;
                swap = result[sub_index];
                result[sub_index] = result[sub_index + 1];
                result[sub_index + 1] = swap;
            }
        }
    }
    
    *returnSize = arrSize;
    
    return arr;
}