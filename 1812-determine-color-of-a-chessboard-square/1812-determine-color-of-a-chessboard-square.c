bool squareIsWhite(char * coordinates)
{
    coordinates[0] = coordinates[0] - 'a';
    coordinates[1] = coordinates[1] - '0';
    
    if(coordinates[0] % 2 == 0)
    {
        if(coordinates[1] % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if(coordinates[1] % 2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}