class Solution {
    public String longestCommonPrefix(String[] strs) {
        StringBuilder sb = new StringBuilder();
        int minLength = Integer.MAX_VALUE;

    for (String str : strs) {
        minLength = Math.min(minLength, str.length());
    }

        for(int i=0;i<minLength;i++){
            char c = strs[0].charAt(i);
            for(String s:strs){
                if(s.charAt(i)!=c){
                    return sb.toString();
                }
            }
            sb.append(c);
        }
        return sb.toString();
    }
}