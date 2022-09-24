

int search(int* nums, int numsSize, int target)
{
    int start = 0, end = numsSize - 1;
    int mid = 0;
    
    while(end >= start)
    {
        mid = start + (end - start) / 2;
        
        if(target < nums[mid])
        {
            end = mid - 1;
        }
        else if(target > nums[mid])
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