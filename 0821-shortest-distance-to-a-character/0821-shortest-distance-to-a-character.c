/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shortestToChar(char * s, char c, int* returnSize)
{
    int *result = (int*)calloc(strlen(s), sizeof(int));
    int index = 0, idx = 0;
    
    while(index < strlen(s))
    {
        int distance = INT_MAX;
        
        for(idx = 0; idx < strlen(s); idx++)
        {
            if(s[idx] == c)
            {
                if(abs(idx - index) < distance)
                {
                    distance = abs(idx - index);
                }
            }
        }
        result[index] = distance;
        index++;
    }
    
    *returnSize = strlen(s);
    
    return result;
}