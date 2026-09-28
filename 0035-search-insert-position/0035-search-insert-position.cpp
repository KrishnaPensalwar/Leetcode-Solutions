class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;

        if(nums[0]>target){
            return 0;
        }

        if(nums[nums.size()-1]<target){
            return nums.size();
        }

        while(i<=j){
            int mid = (j+i)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                j = mid-1;
            }else{
                i = mid + 1;
            }
        }

        return i;
    }
};