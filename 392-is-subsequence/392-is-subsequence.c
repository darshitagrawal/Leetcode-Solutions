

bool isSubsequence(char * s, char * t)
{
    int source_index = 0, target_index = 0;
    
    while(source_index < strlen(s) && target_index < strlen(t))
    {
        if(s[source_index] == t[target_index])
        {
            source_index++;
        }
        target_index++;
    }
    
    return (source_index == strlen(s));
}