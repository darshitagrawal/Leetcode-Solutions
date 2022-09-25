

char nextGreatestLetter(char* letters, int lettersSize, char target)
{
    int index = 0;
    
    while(index < lettersSize)
    {
        if(letters[index] > target)
        {
            return letters[index];
        }
        index++;
    }
    
    return letters[0];
}