class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int x:nums) mp[x]++;
        vector<pair<int,int>>arr;
        for(auto it:mp){
            arr.push_back({it.second,it.first});
        }
        sort(arr.rbegin(),arr.rend());
        int i=0;
        vector<int>res;
        while(k--){
            res.push_back(arr[i++].second);
        }
        return res;
    }
};
