class Solution {
public:
    vector<int> arrayChange(vector<int>& nums,
                            vector<vector<int>>& operations) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }

        for (int i = 0; i < operations.size(); i++) {

            int index = mp[operations[i][0]];
            int target = operations[i][0];
            int replacement = operations[i][1];

            if (index != -1) {
                nums[index] = replacement;
                mp[replacement] = index;
                mp[target] = -1;
            }
        }

        return nums;
    }
};