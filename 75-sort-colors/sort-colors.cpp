class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z = 0;                     // Pointer for 0s
        int current = 0;               // Current index
        int T = nums.size() - 1;       // Pointer for 2s
        
        while (current <= T) {
            if (nums[current] == 0) {
                swap(nums[current], nums[z]);
                current++;
                z++;
            }
            else if (nums[current] == 1) {
                current++;
            }
            else { // nums[current] == 2
                swap(nums[current], nums[T]);
                T--;
            }
        }
    }
};