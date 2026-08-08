class Solution {
public:
    string minWindow(string s,string t) {
        int n=s.size();
        int mn=INT_MAX;
        int m=t.size();
        unordered_map<char,int>mp;
        for(char c:t) mp[c]++;
        int l=-1,r=-1;
        string str="";
        int j=0,sz=0;
        if(m==0 || n<m) return "";
        for(int i=0;i<n;i++){
            if(mp.count(s[i]) && mp[s[i]]>0){
                sz++;
            }
            if(mp.count(s[i])){
                mp[s[i]]--;
            }

            while(sz==m){
                if(mn>(i-j+1)){
                    mn=i-j+1;
                    l=j;
                    r=i;
                }

                if(mp.count(s[j])){
                    mp[s[j]]++;
                    if(mp[s[j]]>0) sz--;
                }
                j++;
            }
        }

        if(l==-1) return "";
        return s.substr(l,r-l+1);
    }
};