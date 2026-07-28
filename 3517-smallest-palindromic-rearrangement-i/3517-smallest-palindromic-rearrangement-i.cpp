class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26, 0);

        // Count frequency of each character
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        string left = "";
        char middle = '\0';

        // Build left half and find middle character
        for (int i = 0; i < 26; i++) {
            left.append(freq[i] / 2, 'a' + i);

            if (freq[i] % 2 == 1) {
                middle = 'a' + i;
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        if (middle != '\0')
            return left + middle + right;
        else
            return left + right;
    }
};