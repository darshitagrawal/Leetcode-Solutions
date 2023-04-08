int compare(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

double trimMean(int* arr, int arrSize)
{
    int index = 0, sum = 0, numToTrim = arrSize * 0.05;
    
    qsort(arr, arrSize, sizeof(int), compare);
    
    for(index = numToTrim; index < arrSize - numToTrim; index++)
    {
        sum += arr[index];
    }
    
    return (double)sum / (double)(arrSize - 2 * numToTrim);
}