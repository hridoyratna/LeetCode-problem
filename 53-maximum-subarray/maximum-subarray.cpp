class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_value = INT_MIN, current_sum = 0;

        for (int val : nums)
        {
            current_sum += val;
            max_value = max(current_sum,max_value);

            if (current_sum < 0)
            {
                current_sum = 0;
            }
        }
        return max_value;
    }
};