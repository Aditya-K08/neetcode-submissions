class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxi=0;
        int n=s.size();
        for(char c='A';c<='Z';c++){
            int curr=0;
            int vio=k;
            int j=0;
            for(int i=0;i<n;i++){
                if(c==s[i]) curr++;
                else {
                    while(vio==0){
                        vio+=(s[j++]!=c);
                        curr--;
                    }
                    curr++;
                    vio--;
                }
                maxi=max(maxi,curr);
            }
        }
        return maxi;
    }
};
