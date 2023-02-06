int searchInsert(int* nums, int numsSize, int target)
{
    int left = 0, right = numsSize - 1, middle = 0;
    
    while(left <= right)
    {
        middle = left + (right - left) / 2;
        
        if(nums[middle] == target)
        {
            return middle;
        }
        else if(nums[middle] < target)
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