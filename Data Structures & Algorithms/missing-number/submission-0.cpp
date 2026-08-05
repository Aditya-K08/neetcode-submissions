class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xosr=0;
        for(int x:nums) xosr^=x;
        for(int i=0;i<=nums.size();i++) xosr^=i;
        return xosr;
    }
};
