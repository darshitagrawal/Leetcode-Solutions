

bool lemonadeChange(int* bills, int billsSize)
{
    int five_count = 0, ten_count = 0, index = 0;
    
    while(index < billsSize)
    {
        if(bills[index] == 5)
        {
            five_count++;
        }
        else if(bills[index] == 10)
        {
            ten_count++;
            if(!five_count)
            {
                return false;
            }
            else
            {
                five_count--;
            }
        }
        else if(bills[index] == 20)
        {
            if(!ten_count)
            {
                if(five_count < 3)
                {
                    return false;
                }
                else
                {
                    five_count -= 3;
                }
            }
            else
            {
                ten_count--;
                if(!five_count)
                {
                    return false;
                }
                else
                {
                    five_count--;
                }
            }
        }
        index++;
    }
    
    return true;
}