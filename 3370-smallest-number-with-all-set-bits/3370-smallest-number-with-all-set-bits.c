int smallestNumber(int n) 
{
    int sum = 0, product = 1;
    
    while(n)
    {
        sum += product;
        product *= 2;
        n >>= 1;
    }
    
    return sum;
}


// def strictly_greater_power_of_2_minus_1(n):
//     # Find the smallest power of 2 greater than n
//     power_of_2 = 1
//     while power_of_2 <= n:
//         power_of_2 <<= 1  # Multiply by 2 using left shift
//     return power_of_2 - 1