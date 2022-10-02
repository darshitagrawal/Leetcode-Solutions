

void moveZeroes(int* nums, int numsSize)
{
    int nzptr = 0, index = 0;
    
    while(index < numsSize)
    {
        if(nums[index] != 0)
        {
            nums[nzptr] = nums[index];
            nzptr++;
        }
        index++;
    }
    
    while(nzptr < numsSize)
    {
        nums[nzptr] = 0;
        nzptr++;
    }
}