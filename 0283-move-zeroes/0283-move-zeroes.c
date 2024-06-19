

void moveZeroes(int* nums, int numsSize)
{
    int index = 0, nzptr = 0;
    
    while(index < numsSize)
    {
        if(nums[index] != 0)
        {
            nums[nzptr++] = nums[index];
        }
        
        index++;
    }
    
    while(nzptr < numsSize)
    {
        nums[nzptr++] = 0;
    }
}