class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        vector<int> rem;
        set<int> st(banned.begin(),banned.end());


        for(int i=1;i<=n;i++){
            if(st.find(i)==st.end()){
                rem.push_back(i);
            }
        }

        int sum=0;
        int ans =0;

        for(int i=0;i<rem.size();i++){
            if(sum+rem[i]<=maxSum){
                ans++;
                sum += rem[i];
            }
        }
        return ans;
    }
};