bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) 
{
    int index = 0, numCol = *matrixColSize, left = 0, right = numCol * matrixSize - 1;
    int pivotIndex = 0, pivotElement = 0;
    
    while(left <= right)
    {
        pivotIndex = (left + right) / 2;
        pivotElement = matrix[pivotIndex / numCol][pivotIndex % numCol];
        
        if(target == pivotElement)
        {
            return true;
        }
        else
        {
            if(target < pivotElement)
            {
                right = pivotIndex - 1;
            }
            else
            {
                left = pivotIndex + 1;
            }
        }
    }
    
    return false;
}