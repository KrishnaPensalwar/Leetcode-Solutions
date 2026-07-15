class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int a = n*(n+1);
        int b = n*n;

        return gcd(a,b);
    }
};