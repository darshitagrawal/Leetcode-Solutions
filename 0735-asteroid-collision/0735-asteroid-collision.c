int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize){
    int* stack = (int*)calloc(asteroidsSize, sizeof(int));
    int stIdx = -1, idx = 0;

    /* + : right
       - : left
    */
    while(idx < asteroidsSize)
    {
        //int curr = asteroids[idx];
        if(stIdx >=0 && stack[stIdx]>0 && asteroids[idx]<0)  /* +- will collision */
        {
            if(abs(asteroids[idx]) > abs(stack[stIdx]))
                stIdx--;
            else if(abs(asteroids[idx]) == abs(stack[stIdx]))
            { 
                stIdx--; idx++; 
            }
            else
                idx++;
        }
        else/* same direction or -+ */
            stack[++stIdx] = asteroids[idx++];
    }
    *returnSize = stIdx+1;
    return stack;
}
