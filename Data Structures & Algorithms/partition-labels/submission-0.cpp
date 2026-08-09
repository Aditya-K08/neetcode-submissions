class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>ans;
        int n=s.length();
        unordered_map<char,int>fst,lst;
        for(int i=0;i<n;i++){
            if(!fst.count(s[i])){
                fst[s[i]]=i;
            }
            lst[s[i]]=i;
        }
        int i=0;
        while(i<n){
            int fs=fst[s[i]];
            int ls=lst[s[i]];
            for(int j=fs;j<ls;j++){
                ls=max(lst[s[j]],ls);
            }
            ans.push_back(ls-fs+1);
            i=++ls;
        }
        return ans;
    }
};
