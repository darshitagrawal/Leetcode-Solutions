

int majorityElement(int* nums, int numsSize)
{
    int candidate = 0, vote = 0, index = 0;
    
    while(index < numsSize)
    {
        if(vote == 0)
        {
            candidate = nums[index];
        }
        
        if(candidate == nums[index])
        {
            vote++;
        }
        else
        {
            vote--;
        }
        
        index++;
    }
    
    return candidate;
}