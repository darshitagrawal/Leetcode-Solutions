int cmpfunc(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

bool isConsecutive(int* nums, int numsSize)
{
    int index1 = 0, index2 = 0;
    int swap = 0;
    
    /*Sort the array*/
    qsort(nums, numsSize, sizeof(int), cmpfunc);
    
    for(index1 = 0; index1 < numsSize - 1; index1++)
    {
        if(nums[index1 + 1] != nums[index1] + 1)
        {
            return false;
        }
    }
    
    return true;
}