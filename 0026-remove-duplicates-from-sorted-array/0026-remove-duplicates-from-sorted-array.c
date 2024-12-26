

int removeDuplicates(int* nums, int numsSize)
{
    int insertIndex = 1, count = 1;
    
    while(count < numsSize)
    {
        if(nums[count] != nums[count - 1])
        {
            nums[insertIndex] = nums[count];
            insertIndex++;
        }
        
        count++;
    }
    
    return insertIndex;
}