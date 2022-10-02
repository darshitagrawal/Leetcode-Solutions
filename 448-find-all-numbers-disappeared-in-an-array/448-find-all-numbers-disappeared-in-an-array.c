

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)
{
    bool hashTable[100001] = {0};
    int index = 0, subIndex = 0;
    
    int *result = (int*)calloc(numsSize, sizeof(int));

    while(index < numsSize)
    {
        hashTable[nums[index]] = true;
        index++;
    }
    
    index = 1;
    
    while(index <= numsSize)
    {
        if(hashTable[index] == false)
        {
            result[subIndex] = index;
            subIndex++;
        }
        index++;
    }
    
    *returnSize = subIndex;
    
    return result;
}