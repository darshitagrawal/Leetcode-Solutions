/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* evenOddBit(int n, int* returnSize)
{
    int *result = (int*)calloc(2, sizeof(int));
    int count = 0, even = 0, odd = 0;
    int numbits = (int)(log(n) / log(2)) + 1;
    
    printf("Num of bits = %d", numbits);
    
    while(count < numbits)
    {
        if(n & 1)
        {
            if(count % 2)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        
        n >>=1;
        count++;
    }
    
    result[0] = odd;
    result[1] = even;
    
    *returnSize = 2;
    
    return result;   
}