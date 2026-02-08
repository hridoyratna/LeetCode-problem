class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> ans ;
        for(int start = 0; start < size-1; start++){
            for(int end = start + 1; end < size; end++){
                if(nums[start] + nums[end] == target){
                    ans.push_back(start);
                    ans.push_back(end);
                    return ans;
                }
            }
        }
        return ans;
    }
};