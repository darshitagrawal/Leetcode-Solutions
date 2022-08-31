

bool canJump(int* nums, int numsSize)
{    
    int index = 0, max_reach = 0;
    
    while(index < numsSize)
    {
        if(index + nums[index] > max_reach)
        {
            max_reach = index + nums[index];
        }
        if(index == max_reach)
        {
            break;
        }
        index++;
    }
    
    return (index >= numsSize - 1);
}