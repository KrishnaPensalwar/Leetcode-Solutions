class Solution {
    public int maxDifference(String s) {
        HashMap<Character,Integer> mp = new HashMap<>();

        for(char c:s.toCharArray()){
            mp.put(c,mp.getOrDefault(c,0)+1);
        }
        int maxeven=Integer.MIN_VALUE,mineven=Integer.MAX_VALUE,maxodd=Integer.MIN_VALUE,minodd=Integer.MAX_VALUE;


        for(int a:mp.values()){
            if(a%2==0){
                maxeven = Math.max(maxeven,a);
                mineven = Math.min(mineven,a);

            }else{
                maxodd = Math.max(maxodd,a);
                minodd = Math.min(minodd,a);
            }
        }

        int ans = Math.max((maxeven-minodd),(maxodd-mineven));

        return (maxodd-mineven);
    }
}