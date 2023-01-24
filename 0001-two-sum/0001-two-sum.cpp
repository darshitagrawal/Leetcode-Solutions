class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int size = nums.size();
        int index = 0, sub_index = 0;
        
        while(index < size)
        {
            sub_index = index + 1;
            while(sub_index < size)
            {
                if(nums[index] + nums[sub_index] == target)
                {
                    return {index, sub_index};
                }
                sub_index++;
            }
            index++;
        }
        
        return {};      
    }
};