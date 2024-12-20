/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n)
{
    int low = 0, high = n, mid = 0;
    int result = 0;
    
    while(low <= high)
    {
        mid = low + (high - low) / 2;
        
        result = guess(mid);
        
        if(!result)
        {
            break;
        }
        else if(result == -1)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    
    return mid;
}