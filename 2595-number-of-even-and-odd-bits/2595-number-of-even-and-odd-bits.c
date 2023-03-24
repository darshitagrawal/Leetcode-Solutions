/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* evenOddBit(int n, int* returnSize)
{
    int *result = (int*)calloc(2, sizeof(int));
    int count = 0;
    int numbits = (int)(log(n) / log(2)) + 1;
    
    while(count < numbits)
    {
        if(n & 1)
        {
            if(count % 2)
            {
                result[1]++;
            }
            else
            {
                result[0]++;
            }
        }
        
        n >>=1;
        count++;
    }
    
    *returnSize = 2;
    
    return result;   
}