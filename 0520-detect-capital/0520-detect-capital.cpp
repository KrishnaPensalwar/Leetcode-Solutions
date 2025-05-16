class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital=0;
        int small=0;

        for(int i=0;i<word.size();i++){
            if(islower(word[i])){
                small++;
            }else{
                capital++;
            }
        }

        if(small==0 || capital==0){
            return true;
        }

        if(capital==1 && isupper(word[0])){
            return true;
        }

        return false;
    }
};