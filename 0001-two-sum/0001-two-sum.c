

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int index = 0, sub_index = 0;
    int *result = (int*)calloc(2, sizeof(int));
    
    while(index < numsSize - 1)
    {
        sub_index = index + 1;
        while(sub_index < numsSize)
        {
            if(nums[index] + nums[sub_index] == target)
            {
                result[0] = index;
                result[1] = sub_index;
            }
            sub_index++;
        }
        index++;
    }
    
    *returnSize = 2;
    return result;
}