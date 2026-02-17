class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        for(int i = 0; i < nums1.size(); i++){

            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    if( ans.empty() ){
                        ans.push_back(nums1[i]);
                    }else if(ans.back() != nums1[i]){
                        ans.push_back(nums1[i]);
                    }else{
                        break;
                    }
                }
            }
        }
        return ans;
    }
};