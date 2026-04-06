class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        if (k <= 1) return 0;

        int N = nums.size();
        int j = 0, i = 0, p = 1, ans = 0;

        while(j < N){
            p *= nums[j];
            while(p >= k){
                p /= nums[i];
                i++;
            }
            ans += j - i + 1;
            j++;
        }
        return ans;
    }
};