int element_Sum(int *nums, int numsSize)
{
    int index = 0, sum = 0;
    
    while(index < numsSize)
    {
        sum += nums[index];
        index++;
    }
    
    return sum;
}

int digit_Sum(int *nums, int numsSize)
{
    int result = 0, sum = 0, index = 0, num = 0;
    
    while(index < numsSize)
    {
        sum = 0;
        num = nums[index];
        
        while(num)
        {
            sum = sum + (num % 10);
            num /= 10;
        }
        
        result += sum;
        index++;
    }
    
    return result;
}

int differenceOfSum(int* nums, int numsSize)
{
    int elementSum = element_Sum(nums, numsSize);
    int digitSum = digit_Sum(nums, numsSize);
    
    return abs(elementSum - digitSum);
}