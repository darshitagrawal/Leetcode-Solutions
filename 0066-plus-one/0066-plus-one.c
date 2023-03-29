

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    int index = digitsSize - 1;
    
    while(index >= 0)
    {
        if(digits[index] == 9)
        {
            digits[index] = 0;
        }
        else
        {
            digits[index]++;
            break;
        }
        index--;
    }
    
    if(!digits[0])
    {
        int *result = (int*)calloc(digitsSize + 1, sizeof(int));
        result[0] = 1;
        
        for(index = 0; index < digitsSize; index++)
        {
            result[index + 1] = digits[index];
        }
        *returnSize = digitsSize + 1;
        
        return result;
    }
    
    *returnSize = digitsSize;
    
    return digits;
}