class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        int n = nums.size();
        while(k){
            int minele=INT_MAX;
            int index=0;
            bool doubleele=false;
            for(int i=0;i<n;i++){
                if(nums[i]<minele){
                    minele = nums[i];
                    index = i;
                }
            }
            nums[index] = nums[index]*multiplier;
            k--;
        }

        return nums;
    }
};