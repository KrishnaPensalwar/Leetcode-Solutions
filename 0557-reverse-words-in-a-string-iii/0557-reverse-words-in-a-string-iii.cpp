class Solution {
public:
    string reverseWords(string s) {
        stack<char> st;
        string ans;
        int i=0;

        while(i < s.length()){
            
            if(s[i]==' '){
                while(!st.empty()){
                  ans += st.top();
                  st.pop();  
                }
                ans+=' ';
            }else{
                st.push(s[i]);
            }
            i++;
        }
        while(!st.empty()){
            ans += st.top();
                  st.pop();  
        }

        return ans;
    }
};