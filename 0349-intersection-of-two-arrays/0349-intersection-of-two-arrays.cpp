class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> mp;
        set<int> ans;

        for (int i : nums1) {
            mp.insert(i);
        }

        for (int i : nums2) {
            if (mp.find(i) != mp.end()) {
                ans.insert(i);
            }
        }

        vector<int> res(ans.begin(), ans.end());

        return res;
    }
};