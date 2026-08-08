class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        unordered_map<char,int>mp;
        int j=0,n=s.size();
        for(int i=0;i<n;i++){
            while(mp.count(s[i])){
                mp[s[j]]--;
                if(mp[s[j]]==0) mp.erase(s[j]);
                j++;
            }
            len=max(len,i-j+1);
            mp[s[i]]++;
        }
        return len;
    }
};
