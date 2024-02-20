int searchInsert(int* nums, int numsSize, int target)
{
    int index = 0, left = index, right = numsSize - 1;
    int middle = 0;
    
    while(left <= right)
    {
        middle = left + (right - left) / 2;
        
        if(nums[middle] == target)
        {
            return middle;
        }
        
        if(nums[middle] < target)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    
    return left;
}