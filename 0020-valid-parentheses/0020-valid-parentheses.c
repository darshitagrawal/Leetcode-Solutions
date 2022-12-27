bool isValid(char * s)
{
    int index = 0, top = -1;
    char *stack = (char*)calloc(10000, sizeof(char));
    
    while(s[index] != '\0')
    {
        if(s[index] == '(' || s[index] == '{' || s[index] == '[')
        {
            top++;
            stack[top] = s[index];
        }
        else
        {
            if(top == -1)
            {
                return false;
            }
            
            switch(s[index])
            {
                case ')':
                    if(stack[top] == '(')
                    {
                        top--;
                    }
                    else
                    {
                        return false;
                    }
                    break;
                    
                case '}':
                    if(stack[top] == '{')
                    {
                        top--;
                    }
                    else
                    {
                        return false;
                    }
                    break;
                    
                case ']':
                    if(stack[top] == '[')
                    {
                        top--;
                    }
                    else
                    {
                        return false;
                    }
                    break;
            }
        }
        index++;
    }
    
    if(top != -1)
    {
        return false;
    }
    
    return true;
}