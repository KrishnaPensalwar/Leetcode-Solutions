class Solution {
public:

    static bool comp(vector<int> &a , vector<int> &b){
        if(a[0]==b[0]) return a[1]>b[1];
        else return a[0]<b[0];
    }

    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        int n = intervals.size();
        int mx = 0;
        int cnt=0;


        for(int i=0;i<n;i++){
            if(intervals[i][1]>mx ){
                cnt++;
                mx = intervals[i][1];
            }
        }

        return cnt;
    }
};