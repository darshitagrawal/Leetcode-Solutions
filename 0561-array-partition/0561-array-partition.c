int cmpfunc(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int arrayPairSum(int* nums, int numsSize)
{
    int sum = 0, index = 0;
    
    qsort(nums, numsSize, sizeof(int), cmpfunc);
    
    while(index < numsSize)
    {
        sum += nums[index];
        index += 2;
    }
    
    return sum;
}