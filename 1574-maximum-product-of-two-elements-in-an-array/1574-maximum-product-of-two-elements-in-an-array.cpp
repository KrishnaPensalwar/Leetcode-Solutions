class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxEle = INT_MIN;
        int secondMax = INT_MIN;

        for(int i=0;i<nums.size();i++){
            if(nums[i] >= maxEle){
                secondMax = maxEle;
                maxEle = nums[i];
            }
            else if(nums[i] > secondMax && nums[i] < maxEle){
                secondMax = nums[i];
            }
        }

        return ( maxEle -1 )*( secondMax - 1);
    }
};