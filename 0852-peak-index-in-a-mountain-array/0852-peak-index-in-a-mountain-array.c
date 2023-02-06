int peakIndexInMountainArray(int* arr, int arrSize)
{
    int index = 0;
    
    while(arr[index] < arr[index + 1])
    {
        index++;
    }
    
    return index;
}