class Solution {
public:
    int maxArea(vector<int>& heights) {
       int n=heights.size();
       int i=0,j=n-1;
       int mx=0;
       while(i<j){
            int bre=min(heights[i],heights[j]);
            int len=j-i;
            mx=max(len*bre,mx);
            if(heights[i]<=heights[j]) i++;
            else j--;
       }
       return mx;
    }
};
