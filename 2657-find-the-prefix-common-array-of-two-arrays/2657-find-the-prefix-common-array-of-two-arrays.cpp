class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        map<int,int> mp;

        for(int i=0;i<A.size();i++){
            mp[A[i]]++;
            int count=0;
            for(int j=0;j<=i;j++){
                if(mp.find(B[j])!=mp.end()){
                    count++;
                }
            }
            ans.push_back(count);
        }

        return ans;
    }
};