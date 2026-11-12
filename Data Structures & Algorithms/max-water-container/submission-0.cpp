class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i=0, j = n-1;
        int maxArea = 0;
        while(i<j){
            int h = min(heights[i], heights[j]);
            int w = j-i;

            int area = h*w;
            maxArea = max(maxArea,area);

            if(heights[i] < heights[j]) i++;
            else j--;
        }
        return maxArea;

    }
};
