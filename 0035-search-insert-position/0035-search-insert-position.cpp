class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans;

        int i = 0;
        int j = nums.size() - 1;


        while (i <= j) {
            int mid = (i + j) / 2;

            if (target > nums[mid]) {
                i = mid + 1;
            } else if (target == nums[mid]) {
                return mid;
            } else {
                j = mid - 1;
            }
        }

        return i;
    }
};