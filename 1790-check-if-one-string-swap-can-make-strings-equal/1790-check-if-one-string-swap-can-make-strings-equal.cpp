class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)return true;
        int i=0,j=0;

        while(s1[i]==s2[j] && i<s1.length() && j<s2.length()){
            i++;
            j++;
        }

        vector<int> ks;
        for(int k=j+1;k<s2.size();k++){
            if(s2[k]==s1[i]){
                ks.push_back(k);
            }
        }

        for(int a=0;a<ks.size();a++){
            swap(s2[i],s2[ks[a]]);
            if(s1==s2)return true;
            swap(s2[i],s2[ks[a]]);
        }

       

        return false;
    }
};