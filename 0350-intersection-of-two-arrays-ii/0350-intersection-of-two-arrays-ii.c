

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
    int maxSize = 0, index1 = 0, index2 = 0, count = 0;
    if(nums1Size > nums2Size)
    {
        maxSize = nums1Size;
    }
    else
    {
        maxSize = nums2Size;
    }
    
    int* result = (int*)calloc(maxSize, sizeof(int));
    
    while(index1 < nums1Size)
    {
        index2 = 0;
        while(index2 < nums2Size)
        {
            if(nums1[index1] == nums2[index2])
            {
                result[count++] = nums1[index1];
                nums2[index2] = -1;
                break;
            }
            index2++;
        }
        index1++;
    }
    *returnSize = count;
    return result;
}