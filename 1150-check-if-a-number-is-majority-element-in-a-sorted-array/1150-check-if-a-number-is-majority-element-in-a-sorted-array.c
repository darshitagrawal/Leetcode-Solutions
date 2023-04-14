bool isMajorityElement(int* nums, int numsSize, int target)
{
    int vote = 0, index = 0;
    
    while(index < numsSize)
    {
        if(target == nums[index])
        {
            vote++;
        }
        else
        {
            vote--;
        }
        
        index++;
    }
    
    if(vote > 0)
    {
        return true;
    }
    
    return false;
}