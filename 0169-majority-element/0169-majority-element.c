

int majorityElement(int* nums, int numsSize)
{
    int vote = 0, index = 0, candidate = 0;
    
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