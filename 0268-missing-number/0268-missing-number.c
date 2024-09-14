

int missingNumber(int* nums, int numsSize)
{
    int index = 0, actualSum = 0;
    int expectedSum = (numsSize * (numsSize + 1)) / 2;
    
    while(index  < numsSize)
    {
        actualSum += nums[index];
        index++;
    }
    
    return (expectedSum - actualSum);
}