class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int a =0;
        // int b =0;
        // int c=0;

        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         a++;
        //     }else if(nums[i]==1){
        //         b++;
        //     }else{
        //         c++;
        //     }
        // }

        // for(int i=0;i<a;i++){
        //     nums[i]=0;
        // }

        // for(int i=a;i<a+b;i++){
        //     nums[i]=1;
        // }
        // for(int i=a+b;i<nums.size();i++){
        //     nums[i]=2;
        // }

        int low = 0, mid = 0, high = nums.size() - 1;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};