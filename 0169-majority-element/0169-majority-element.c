

int majorityElement(int* nums, int numsSize)
{
    int vote = 0, index = 0, majorElement = nums[index];
    
    while(index < numsSize)
    {
        if(majorElement == nums[index])
        {
            vote++;
        }
        else
        {
            vote--;
        }
        
        index++;
        
        if(vote == 0)
        {
            majorElement = nums[index];
        }
    }
    
    return majorElement;
}