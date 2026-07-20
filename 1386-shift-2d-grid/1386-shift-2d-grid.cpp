class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int m = grid.size();
        int n = grid[0].size();

        for (int a = 0; a < k; a++) {
            int lastitem = grid[m - 1][n - 1];
            vector<int> last;

            for (int i = 0; i < m; i++) {
                last.push_back(grid[i][n - 1]);
            }

            for (int i = 0; i < grid.size(); i++) {
                for (int j = n - 1; j > 0; j--) {
                    grid[i][j] = grid[i][j - 1];
                }
            }

            for (int i = 1; i < m; i++) {
                grid[i][0] = last[i - 1];
            }
            grid[0][0] = lastitem;
        }

        return grid;
    }
};