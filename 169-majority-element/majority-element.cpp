class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int count = 0, ans = 0;
        for(int i = 0; i < size; i++){
            if(count == 0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                count++ ;
            }else{
                count--;     
            }
        }
        return ans;
    }
};