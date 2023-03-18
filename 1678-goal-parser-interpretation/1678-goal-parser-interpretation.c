

char * interpret(char * command)
{
    int comIndex = 0, resIndex = 0;
    
    while(comIndex < strlen(command))
    {
        if(command[comIndex] == 'G')
        {
            command[resIndex] = 'G';
            comIndex++;
        }
        else if(command[comIndex] == '(' && command[comIndex + 1] == ')')
        {
            command[resIndex] = 'o';
            comIndex += 2;
        }
        else if(command[comIndex] == '(' && command[comIndex + 1] == 'a')
        {
            command[resIndex++] = 'a';
            command[resIndex] = 'l';
            comIndex += 4;
        }
        
        resIndex++;
    }
    command[resIndex] = '\0';
    
    return command;
}