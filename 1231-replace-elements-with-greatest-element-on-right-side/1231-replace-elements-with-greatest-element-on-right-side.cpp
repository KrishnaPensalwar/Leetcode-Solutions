class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int currMax = nums[n - 1];
        ans.push_back(-1);

        for (int i = n - 2; i >= 0; i--) {
            ans.push_back(currMax);

            if (nums[i] > currMax) {
                currMax = nums[i];
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};