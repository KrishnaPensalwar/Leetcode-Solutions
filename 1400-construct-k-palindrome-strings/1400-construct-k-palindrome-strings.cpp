class Solution {
public:
    bool canConstruct(string s, int k) {
       int n = s.length();
       if(k>n) return false;
        vector<int> freq(26,0);
        for(auto it:s){
            freq[it-'a']++;
        }
       int odd_count=0;
        for(auto count:freq){
            if(count%2!=0){
                odd_count++;
            }
        }
        return odd_count<=k;
    }
};