class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int maxi=nums[0],sum=0;
        // int n= nums.size();

        // if(n==1){
        //     return nums[0];
        // }
        // for(int i=0;i<n;i++){
        //     sum += nums[i];
        //     maxi=max(maxi,sum);
        //     if(sum < 0){
        //         sum=0;
        //     }
        // }
        // return maxi;

        if(nums.size()==1)return nums[0];
        int maxsum =0;
        int ans=nums[0];

        for(int i=0;i<nums.size();i++){
            maxsum += nums[i];
            ans=max(ans,maxsum);
            if(maxsum<0){
                maxsum=0;
            }
        }
        return ans;
    }
};