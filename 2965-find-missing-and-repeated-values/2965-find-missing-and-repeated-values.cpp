class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> arr(n * n, 0);

        int duplicate = -1, sum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int val = grid[i][j];
                sum += val;

                if (arr[val - 1] != 0) {
                    duplicate = val;
                } else {
                    arr[val - 1] = val;
                }
            }
        }

        int expectedSum = (n * n * (n * n + 1)) / 2;
        int missing = expectedSum - (sum - duplicate);

        return {duplicate, missing};
    }
};