/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int countBits(int num) {
    int count = 0;
    while (num) {
        num &= (num - 1);
        count++;
    }
    return count;
}

int* sortByBits(int* arr, int arrSize, int* returnSize) {
    int i, j, temp;
    // calculate the number of bits in each integer and store it in a separate array
    int bits[arrSize];
    for (i = 0; i < arrSize; i++) {
        bits[i] = countBits(arr[i]);
    }
    // sort the array based on the number of bits in each integer
    for (i = 0; i < arrSize-1; i++) {
        for (j = 0; j < arrSize-i-1; j++) {
            if (bits[j] > bits[j+1] || (bits[j] == bits[j+1] && arr[j] > arr[j+1])) {
                // swap the integers and their corresponding bit counts
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                temp = bits[j];
                bits[j] = bits[j+1];
                bits[j+1] = temp;
            }
        }
    }
    *returnSize = arrSize;
    return arr;
}
