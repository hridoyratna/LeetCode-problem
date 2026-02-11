class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int size = nums.size();
        int start = 0, end = size - 1;

        if(size == 1){
            return nums[0];
        }

        while(start <= end){
            int mid = start + (end - start)/2;

            if(mid == 0 && nums[0] != nums[1]){
                return nums[mid];
            }
            if(mid == size - 1 && nums[size-1] != nums[size-2]){
                return nums[mid];
            }

            if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]){
                return nums[mid];
            }else if(mid % 2 == 0){       // even
                if(nums[mid-1] == nums[mid]){  //left
                    end = mid - 1;
                }else{      //right
                    start = mid + 1;   
                }
            }else{      // odd
                if(nums[mid-1] == nums[mid]){   //right
                    start = mid + 1;
                }else{      //left
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};