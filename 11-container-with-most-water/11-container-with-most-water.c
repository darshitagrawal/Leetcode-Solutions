

int maxArea(int* height, int heightSize)
{
    int left = 0, right = heightSize - 1, min = 0, maxarea = 0;
    int width = 0;
    
    while(left < right)
    {
        width = right - left;
        min = height[left] < height[right] ? height[left] : height[right];
        
        if(maxarea < (min * width))
        {
            maxarea = min * width;
        }
        
        if(height[left] <= height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    
    return maxarea;
}