

bool isHappy(int n)
{
    int n_copy = n;
    unsigned int sum = 0;
    
    while(1)
    {
        sum += (n_copy % 10) * (n_copy % 10);
        n_copy /= 10;
        if(n_copy == 0)
        {
            if(sum < 10)
            {
                if(sum == 1 || sum == 7)
                {
                    return true;
                }
                else
                {
                    break;
                }
            }
            n_copy = sum;
            sum = 0;
        }
    }
    
    return false;
}