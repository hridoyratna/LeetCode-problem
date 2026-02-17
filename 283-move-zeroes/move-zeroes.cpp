class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int st = 0 , end = nums.size() - 1;
        while(st<= end){
            int  index=-1;
            if(nums[st] == 0){
                index = st;
                nums.push_back(nums[st]);
                end--;
                nums.erase(nums.begin()+index);
            }
            else{
                st++;
            }
        }
        
    }
};