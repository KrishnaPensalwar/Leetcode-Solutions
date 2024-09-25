class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        vector<int> ans;
        int n=a.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i] + a[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }

        return ans;
    }
};