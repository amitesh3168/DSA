class Solution {
public:
    string largestMerge(string word1, string word2) {
      int i = 0, j = 0;
        int n = word1.size(), m = word2.size();
        string ans = "";
        while (i < n && j < m) {
            int p = i, q = j;
            while (p < n && q < m && word1[p] == word2[q]) {
                p++;
                q++;
            }
            if (q == m || (p < n && word1[p] > word2[q])) {
                ans += word1[i++];
            } else {
                ans += word2[j++];
            }
        }
        while (i < n) ans += word1[i++];
        while (j < m) ans += word2[j++];

        return ans;
    }
};