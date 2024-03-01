int searchInsert(int* nums, int numsSize, int target) {
    
    int f=0;
    int l=numsSize-1;
    
    while(l>=f) {

        int mid = f + ((l-f) / 2);

        if(nums[mid] == target) {
            return mid;
        }
        // left part
        else if(target < nums[mid]) {
            l = mid-1;
        }
        // right part
        else {
            f = mid+1;
        }
    }

    return f;
}