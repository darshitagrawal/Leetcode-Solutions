int findDuplicate(int* nums, int numsSize)
{
    int tortoise = nums[0], hare = nums[0];
    
    do
    {
        hare = nums[nums[hare]];
        tortoise = nums[tortoise];
    }
    while(tortoise != hare);
    
    tortoise = nums[0];
    
    while(tortoise != hare)
    {
        tortoise = nums[tortoise];
        hare = nums[hare];
    }
    
    return tortoise;
}