class Solution {
    public int lengthOfLastWord(String s) {
        String trimmed = s.trim();
        String[] splittedString = trimmed.split(" ");
        int n = splittedString.length;

        return splittedString[n-1].length();
        
    }
}