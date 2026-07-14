class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> mp;
        vector<int> nums = arr;
        sort(arr.begin(),arr.end());

        for(int i : arr){
            if(mp.find(i) == mp.end()){
                mp[i] = mp.size() + 1;
            }
        }

        for(int i=0;i<nums.size();i++){
            nums[i] = mp[nums[i]];
        }

        return nums;
    }
};