class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans = 0;
        
        while(n>0){
            if(n%10 != 0){
                ans = ans * 10 + n%10; 
            }
            n /= 10;
        }

        long long res = 0;
        long long sum = 0;


        while(ans!=0){
            sum += ans %10;
            res = res * 10 + ans%10;
            ans /= 10;  
        }

        return res * sum;
    }
};