class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        if(intervals.empty()) return 0;
        sort(intervals.begin(),intervals.end(),[](Interval &a,Interval &b){
            return a.start<b.start;
        });
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto &x:intervals){
            if(!pq.empty() && pq.top()<=x.start){
                pq.pop();
            }
            pq.push(x.end);
        }
        return pq.size();
    }
};