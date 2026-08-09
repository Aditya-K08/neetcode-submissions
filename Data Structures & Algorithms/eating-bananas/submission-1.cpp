class Solution {
public:
    bool feasible(int spd,vector<int>&piles,int h){
        int64_t cnt=0;
        for(int x:piles){
            cnt+=(x+spd-1)/spd;
        }
        return cnt<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int lo=1,hi=1e9;
        int speed=INT_MAX;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(feasible(mid,piles,h)) {
                hi=mid-1;
                speed=min(speed,mid);
            }
            else lo=mid+1;
        }
        return lo;
    }
};
