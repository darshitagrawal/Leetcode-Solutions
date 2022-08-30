

int maximumProduct(int* nums, int numsSize)
{
    int min1 = 1001, min2 = 1001, max1 = -1001, max2 = -1001, max3 = -1001;
    int index = 0;
    
    while(index < numsSize)
    {
        if(nums[index] <= min1)
        {
            min2 = min1;
            min1 = nums[index];
        }
        /*nums[index] lies between min1 and min2*/
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
        /*nums[index] lies between max1 and max2*/
        else if(nums[index] >= max2)
        {
            max3 = max2;
            max2 = nums[index];
        }
        /*nums[index] lies between max2 and max3*/
        else if(nums[index] >= max3)
        {
            max3 = nums[index];
        }
        index++;
    }
    
    return (min1 * min2 * max1) > (max1 * max2 * max3) ? (min1 * min2 * max1) : (max1 * max2 * max3);
}