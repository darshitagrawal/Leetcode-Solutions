

int singleNumber(int* nums, int numsSize)
{
    long loner = 0;
    
    for(int shift = 0; shift < 32; shift++)
    {
        int bitSum = 0;
        
        for(int index = 0; index < numsSize; index++)
        {
            bitSum += (nums[index] >> shift) & 1;
        }
        
        long lonerBit = bitSum % 3;
        loner = loner | (lonerBit << shift);
    }
    
    return (int)loner;
}