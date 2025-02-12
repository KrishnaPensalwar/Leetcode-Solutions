class Solution {
    public int winningPlayerCount(int n, int[][] pick) {
        HashMap<Integer,HashMap<Integer,Integer>> mp=new HashMap<>();
        
        for(int [] p:pick){
            int player =p[0];
            int color = p[1];

            HashMap<Integer,Integer> newmap = mp.getOrDefault(player,new HashMap<>());
            newmap.put(color,newmap.getOrDefault(color,0)+1);
            mp.put(player,newmap);
        }
        int ans=0;

        for(int i=0;i<n;i++){
            if(mp.containsKey(i)){
                HashMap<Integer,Integer> temp = mp.get(i);
                for(int count :temp.values()){
                    if(count>i){
                        ans++;
                        break;
                    }
                }
            }
        }
        return ans;
    }
}