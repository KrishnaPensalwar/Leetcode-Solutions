class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.length()==0) return 0;
        int i=0;
        int j=0;
        int ans =0;
        int count=0;
        set<char> st;

        while(i<s.length() && j<s.length()){
            if(st.find(s[j]) == st.end()){
                st.insert(s[j]);
                count++;
                j++;
                
            }else{
                st.erase(s[i]);
                count--;
                i++;
            }
                ans = max(ans,j-i);
            
        }


        return ans;
    }
};