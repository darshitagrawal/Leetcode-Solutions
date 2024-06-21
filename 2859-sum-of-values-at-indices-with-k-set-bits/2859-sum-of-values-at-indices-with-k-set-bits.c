int countSetBits(int num)
{
    int result = 0, setBits = 0;
    
    while(num)
    {
        setBits = num & (-num);
        num -= setBits;
        result++;
    }
    
    return result;
}

int sumIndicesWithKSetBits(int* nums, int numsSize, int k)
{
    int sum = 0, index = 0, setBits = 0;
    
    while(index < numsSize)
    {
        setBits = countSetBits(index);

        if(setBits == k)
        {
            sum += nums[index];
        }
        
        index++;
    }
    
    return sum;
}