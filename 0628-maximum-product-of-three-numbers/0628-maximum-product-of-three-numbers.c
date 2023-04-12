

int maximumProduct(int* nums, int numsSize)
{
    int min1 = INT_MAX, min2 = INT_MAX;
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int index = 0;
    
    while(index < numsSize)
    {
        if(nums[index] <= min1)
        {
            min2 = min1;
            min1 = nums[index];
        }
        else if(nums[index] <= min2) 
        {
            min2 = nums[index];
        }
        if(nums[index] >= max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = nums[index];
        }
        else if(nums[index] >= max2)
        {
            max3 = max2;
            max2 = nums[index];
        }
        else if(nums[index] >= max3)
        {
            max3 = nums[index];
        }
        
        index++;
    }
    
    return ((min1 * min2 * max1) > (max1 * max2 * max3) ? (min1 * min2 * max1) : (max1 * max2 * max3));
}