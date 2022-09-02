

int titleToNumber(char * columnTitle)
{
    int letter = 0, index = 0, result = 0;
    
    while(index < strlen(columnTitle))
    {
        letter = columnTitle[index] - 'A' + 1;
        result = result * 26 + letter;
        
        index++;
    }
    
    return result;
}