bool backspaceCompare(char * s, char * t)
{
    int top = -1, index = 0;
    char *stack1 = (char*)calloc(strlen(s) + 1, sizeof(char));
    char *stack2 = (char*)calloc(strlen(t) + 1, sizeof(char));
    
    while(index < strlen(s))
    {
        if(s[index] == '#' && top != -1)
        {
            stack1[top] = '\0';
            top--;
        }
        else if(s[index] != '#')
        {
            top++;
            stack1[top] = s[index];
        }
        index++;
    }
    
    index = 0;
    top = -1;
    
    while(index < strlen(t))
    {
        if(t[index] == '#' && top != -1)
        {
            stack2[top] = '\0';
            top--;
        }
        else if(t[index] != '#')
        {
            top++;
            stack2[top] = t[index];
        }
        index++;
    }
    
    if(strcmp(stack1, stack2) == 0)
    {
        return true;
    }
    
    return false;
}