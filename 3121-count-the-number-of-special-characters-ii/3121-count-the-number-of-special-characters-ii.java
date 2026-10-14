class Solution {
    public int numberOfSpecialChars(String word) {
        int count = 0;

        for (char ch = 'a'; ch <= 'z'; ch++) {
            char upper = (char) (ch - 'a' + 'A');

            int lowerPos = word.indexOf(ch);
            int upperPos = word.indexOf(upper);

            if (lowerPos != -1 && upperPos != -1) {
                int lastLowerPos = word.lastIndexOf(ch);

                if (lastLowerPos < upperPos) {
                    count++;
                }
            }
        }
        return count;
    }
}