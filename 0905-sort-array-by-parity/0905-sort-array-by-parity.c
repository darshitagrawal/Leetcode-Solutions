

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize)
{
    int start = 0, end = numsSize - 1, swap = 0;
    
    while(start < end)
    {
        if((nums[start] % 2) > (nums[end] % 2))
        {
            swap = nums[start];
            nums[start] = nums[end];
            nums[end] = swap;
        }
        
        if(nums[start] % 2 == 0)
        {
            start++;
        }
        if(nums[end] % 2 == 1)
        {
            end--;
        }
    }
    
    *returnSize = numsSize;
    
    return nums;
}