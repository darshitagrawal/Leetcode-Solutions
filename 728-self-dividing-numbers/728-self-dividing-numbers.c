

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize)
{
    int digit = left, num_copy = left, index = 0, num = left;
    int *result = (int*)calloc(right - left + 1, sizeof(int));
    
    while(num <= right)
    {
        while(num)
        {
            //num_copy = num;
            digit = num % 10;
            num /= 10;
            
            if((digit == 0) || (num_copy % digit != 0))
            {
                break;
            }
            else
            {
                if(!num)
                {
                    result[index++] = num_copy;
                }
            }
        }
        num_copy++;
        num = num_copy;
        digit = num_copy;
        //index++;
    }
    *returnSize = index;
    
    return result;
}