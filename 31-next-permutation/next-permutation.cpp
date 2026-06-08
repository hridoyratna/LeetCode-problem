class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       // next_permutation(nums.begin(), nums.end());

       int n = nums.size(), piv = -1;
       for(int i = n - 2; i >= 0; i--){   // O(n)
            if(nums[i] < nums[i+1]){
                piv = i;
                break;
            }
        }

        if(piv == -1){
            reverse(nums.begin(), nums.end());
            return;
        }


        for(int i = n - 1; i > piv; i--){  //O(n)
            if(nums[i] > nums[piv]){
                swap(nums[i], nums[piv]);
                break;
            }
        }

        int i = piv + 1, j = n - 1;
        while(i <= j){
            swap(nums[i],nums[j]);
            i++, j--;
        }

    }
};