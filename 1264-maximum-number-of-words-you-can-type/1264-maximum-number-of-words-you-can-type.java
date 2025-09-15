class Solution {
    public int canBeTypedWords(String text, String brokenLetters) {
        // Split the text into words
        String[] words = text.split(" ");
        
        int count = 0;
        
        // Check each word
        for (String word : words) {
            boolean canType = true;
            for (char c : brokenLetters.toCharArray()) {
                if (word.indexOf(c) != -1) {
                    canType = false;
                    break; // word contains a broken letter
                }
            }
            if (canType) {
                count++;
            }
        }
        
        return count;
    }
}
