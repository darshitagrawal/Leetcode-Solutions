bool increasingTriplet(int* nums, int numsSize)
{
    int first = INT_MAX, second = INT_MAX;
    int index = 0;
    
    while(index < numsSize)
    {
        if(nums[index] <= first)
        {
            first = nums[index];
        }
        else if(nums[index] <= second)
        {
            second = nums[index];
        }
        else
        {
            return true;
        }
        
        index++;
    }
    
    return false;    
}