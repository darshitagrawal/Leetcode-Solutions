int findGCD(int* nums, int numsSize)
{
    int index = 0, min = nums[0], max = nums[0];
    int gcd = 0;
    
    while(index < numsSize)
    {
        if(min < nums[index])
        {
            min = nums[index];
        }
        if(max > nums[index])
        {
            max = nums[index];
        }
        index++;
    }
    
    for(index = 1; index <= min; index++)
    {
        if((min % index == 0) && (max % index == 0))
        {
            gcd = index;
        }
    }
    
    return gcd;
}