int minOperations(int* nums, int numsSize, int k) 
{
    int finalXor = 0, index = 0, count = 0;
    
    while(index < numsSize)
    {
        finalXor ^= nums[index];
        index++;
    }
    
    while(k || finalXor)
    {
        if((k % 2) != (finalXor % 2))
        {
            count++;
        }
        
        k /= 2;
        finalXor /= 2;
    }
    
    return count;
}