

int removeDuplicates(int* nums, int numsSize)
{
    int insertIndex = 1, index = 1;
    
    while(index < numsSize)
    {
        if(nums[index] != nums[index - 1])
        {
            nums[insertIndex] = nums[index];
            insertIndex++;
        }
        
        index++;
    }
    
    return insertIndex;
}