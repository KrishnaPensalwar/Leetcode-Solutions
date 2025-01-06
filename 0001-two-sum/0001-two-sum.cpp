class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        // vector<int> ans;
        // int n=a.size();

        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(a[i] + a[j] == target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             return ans;
        //         }
        //     }
        // }

        // return ans;

        map<int, vector<int>> mp;

        for (int i = 0; i < a.size(); i++) {
            mp[a[i]].push_back(i);
        }

        for (int i = 0; i < a.size(); i++) {
            int complement = target - a[i];
            if (mp.find(complement) != mp.end()) {
                for (int idx : mp[complement]) {
                    if (idx != i) { 
                        return {i, idx};
                    }
                }
            }
        }
        return {};
    }
};