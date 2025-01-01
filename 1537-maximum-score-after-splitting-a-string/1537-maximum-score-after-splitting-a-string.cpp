class Solution {
public:
    int maxScore(string s) {

        int i = 1;
        int ans=0;

        while (i < s.length()) {
            string left = "";
            string right = "";
            int zero=0;
            int one =0;

            for(int j=0;j<i;j++){
                left += s[j];
                if(s[j]=='0')zero++;
            }
            for(int j=i;j<s.length();j++){
                right += s[j];
                if(s[j]=='1')one++;
            }

            ans = max(ans , one + zero);
            i++;
            
        }
        return ans;
    }
};