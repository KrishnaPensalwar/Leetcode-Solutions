class Solution {
    public boolean isPossibleToSplit(int[] nums) {
        if(nums.length %2 != 0){
            return false;
        }
        HashMap<Integer,Integer> mp = new HashMap<>();

        for(int num:nums){
            mp.put(num,mp.getOrDefault(num,0)+1);
        }

        for(int i:mp.values()){
            if(i>2){
                return false;
            }
        }
        return true;
    }
}