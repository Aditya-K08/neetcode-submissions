class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int tar=target-x;
            if(mp.count(tar)) return {mp[tar],i};
            mp[x]=i;
        }
        return {-1,-1};
    }
};
