class Solution {
    public String removeOccurrences(String s, String part) {
        
        String ans;
        while(s.contains(part)){
            s = s.replaceFirst(part,"");
        }
        return s;
    }
}