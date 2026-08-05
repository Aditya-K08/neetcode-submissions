class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>arr;
        for(string str:strs){
            string temp=str;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(str);
        }
        for(auto it:mp){
            auto vec=it.second;
            arr.push_back(vec);
        }
        return arr;
    }
};
