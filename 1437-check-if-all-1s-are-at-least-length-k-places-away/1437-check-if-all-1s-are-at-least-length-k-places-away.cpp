class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        // vector<int> one_places;
        int lastone = -99999;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                if(i-lastone < k+1){
                    return false;
                }else{
                    lastone = i;
                }
            }
        }

        // if(one_places.size()<2){
        //     return true;
        // }

        // for(int i=0;i<one_places.size()-1;i++){
        //     if(one_places[i+1]-one_places[i]<k+1){
        //         return false;
        //     }
        // }

        return true;
    }
};