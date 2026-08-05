class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        for(int x:nums){
            st.insert(x);
        }
        int len=0;
        for(int x:nums){
            if(!st.count(x-1)){
                int curr=0;
                while(st.count(x)){
                    curr++;
                    x++;
                }
                len=max(len,curr);
            }
        }
        return len;
    }
};
