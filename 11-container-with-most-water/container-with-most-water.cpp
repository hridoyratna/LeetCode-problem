class Solution {
public:
    int maxArea(vector<int>& height) {

        int maxWater = 0, size = height.size();
        int st = 0, end = size - 1;

        while(st < end){
            int w = end - st;
            int Hg = min(height[st], height[end]);
            int area = w * Hg;
            maxWater =  max(maxWater , area);

            height[st] < height[end]  ? st++ : end--;
        }
        return maxWater;
    }
};