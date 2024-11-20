

int missingNumber(int* nums, int numsSize)
{
    int index = 0, missing = numsSize;
    
    while(index < numsSize)
    {
        missing ^= index ^ nums[index]; 
        
        index++;
    }
    
    return missing;
}