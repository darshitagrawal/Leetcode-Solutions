int maxDistance(int* colors, int colorsSize)
{
    int maxDist = 0, index = 0, subIndex = 1, dist = 0;
    
    while(index < colorsSize)
    {
        subIndex = index + 1;
        
        while(subIndex < colorsSize)
        {
            if(colors[index] != colors[subIndex])
            {
                dist = abs(subIndex - index);
                maxDist = (dist > maxDist) ? dist : maxDist;
            }
            
            subIndex++;
        }
        
        index++;
    }
    
    return maxDist;
}