/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* majorityElement(int* nums, int numsSize, int* returnSize)
{
    int vote1 = 0, vote2 = 0, candidate1 = 0, candidate2 = 0, index = 0;
    int *result = (int*)calloc(2, sizeof(int));
    
    while(index < numsSize)
    {
        if(candidate1 == nums[index])
        {
            vote1++;
        }
        else if(candidate2 == nums[index])
        {
            vote2++;
        }
        else if(vote1 == 0)
        {
            candidate1 = nums[index];
            vote1++;
        }
        else if(vote2 == 0)
        {
            candidate2 = nums[index];
            vote2++;
        }
        else
        {
            vote1--;
            vote2--;
        }
        
        index++;
    }
    
    vote1 = 0;
    vote2 = 0;
    
    for(index = 0; index < numsSize; index++)
    {
        if(candidate1 == nums[index])
        {
            vote1++;
        }
        if(candidate2 == nums[index])
        {
            vote2++;
        }
    }
    
    index = 0;
    
    if(vote1 > numsSize / 3)
    {
        result[index++] = candidate1;
    }
    
    if((vote2 > numsSize / 3) && (candidate2 != candidate1))
    {
        result[index++] = candidate2;
    }
    
    *returnSize = index;
    
    return result;
}