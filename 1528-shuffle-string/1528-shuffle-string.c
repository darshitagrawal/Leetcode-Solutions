char * restoreString(char * s, int* indices, int indicesSize)
{
    char *result = (char*)calloc(indicesSize + 1, sizeof(char));
    int index = 0;
    
    while(index < indicesSize)
    {
        result[indices[index]] = s[index];
        index++;
    }
    
    result[index] = '\0';
    
    return result;
}