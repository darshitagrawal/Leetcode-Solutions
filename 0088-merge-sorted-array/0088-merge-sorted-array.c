

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    int p1 = m - 1, p2 = n - 1, p = m + n - 1;
    
    while(p >= 0)
    {
        if(p2 < 0)
        {
            break;
        }
        if(p1 >= 0 && nums1[p1] > nums2[p2])
        {
            nums1[p] = nums1[p1--];
        }
        else
        {
            nums1[p] = nums2[p2--];
        }
        
        p--;
    }
}