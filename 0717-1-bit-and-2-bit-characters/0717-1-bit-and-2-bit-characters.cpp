class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();

        if (n == 1 && bits[0] == 0)
            return true;
        if (n == 1 && bits[0] == 1)
            return false;
        int i = 0;
        while (i < n) {
            if (bits[i] == 0) {
                i++;
            } else {
                i += 2;
            }
            if (i == n - 1) {
                return true;
            }
        }

        return false;
    }
};