

int search(int* nums, int numsSize, int target)
{
    int start = 0, end = numsSize - 1;
    int mid = 0;
    
    while(start <= end)
    {
        mid = start + (end - start) / 2;
        
        if(nums[mid] > target)
        {
            end = mid - 1;
        }
        else if(nums[mid] < target)
        {
            start = mid + 1;
        }
        else if(target == nums[mid])
        {
            return mid;
        }
    }
    
    return -1;

}