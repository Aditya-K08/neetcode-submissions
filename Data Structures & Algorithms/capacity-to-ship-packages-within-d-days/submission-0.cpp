class Solution {
public:
    bool ok(vector<int>& weights, int days,int mid){
        int dys=1;
        int sum=0;
        int n=weights.size();
        for(int i=0;i<n;i++){
            if(sum+weights[i]>mid){
                dys++;
                sum=0;
            }
            sum+=weights[i];
        }
        return dys<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int lo=*max_element(weights.begin(),weights.end());
        int hi=accumulate(weights.begin(),weights.end(),0);
        int ans=INT_MAX;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(ok(weights,days,mid)) {

                hi=mid-1;
            }
            else lo=mid+1;
        }
        return lo;
    }
};