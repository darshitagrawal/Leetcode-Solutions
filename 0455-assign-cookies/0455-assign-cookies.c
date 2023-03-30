int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int findContentChildren(int* g, int gSize, int* s, int sSize)
{
    int gIndex = 0, sIndex = 0, satisfied = 0;
    
    qsort(g, gSize, sizeof(int), compare);
    qsort(s, sSize, sizeof(int), compare);
    
    while(gIndex < gSize && sIndex < sSize)
    {
        if(s[sIndex] >= g[gIndex])
        {
            sIndex++;
            gIndex++;
            satisfied++;
        }
        else
        {
            sIndex++;
        }
    }
    
    return satisfied;
}