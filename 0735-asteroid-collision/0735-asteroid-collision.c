/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize)
{
    int top = -1, index = 0;
    int *stack = (int*)calloc(asteroidsSize, sizeof(int));
    
    while(index < asteroidsSize)
    {
        if(top == -1)
        {
            top++;
            stack[top] = asteroids[index];
        }
       /* else if(stack[top] < 0 && asteroids[index] > 0)
        {
            if(abs(asteroids[index]) > abs(stack[top]))
            {
                stack[top] = asteroids[index];
                top--;
                continue;
            }
            else if(stack[top] + asteroids[index] == 0)
            {
                top--;
            }
        }*/
        else if(stack[top] > 0 && asteroids[index] < 0)
        {
            if(abs(asteroids[index]) > abs(stack[top]))
            {
                stack[top] = asteroids[index];
                top--;
                continue;
            }
            else if(stack[top] + asteroids[index] == 0)
            {
                top--;
            }
        }
        else
        {
            top++;
            stack[top] = asteroids[index];
        }
        index++;
    }
    
    *returnSize = top + 1;
    
    return stack;
}