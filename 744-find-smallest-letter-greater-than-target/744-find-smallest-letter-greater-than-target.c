

char nextGreatestLetter(char* letters, int lettersSize, char target)
{
    int start = 0, end = lettersSize - 1; 
    int mid = 0;
    
    while(start <= end)
    {
        mid = start + (end - start) / 2;
        if(letters[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    
    return letters[start % lettersSize];
}