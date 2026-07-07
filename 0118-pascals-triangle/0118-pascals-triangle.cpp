class Solution {
public:
    vector<vector<int>> generate(int numRows) {

       vector<vector<int>> ans;

        if (numRows == 0)
            return ans;

        ans.push_back({1});

        for (int i = 1; i < numRows; i++) {
            vector<int> temp;
            temp.push_back(1);

            vector<int> &last = ans.back();

            for (int j = 0; j < last.size() - 1; j++) {
                temp.push_back(last[j] + last[j + 1]);
            }

            temp.push_back(1);
            ans.push_back(temp);
        }

        return ans;

    }
};