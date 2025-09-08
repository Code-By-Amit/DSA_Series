class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int current_width = 0, lines = 1;
        for (char ch : s) {
            int w = widths[ch - 'a'];
            if (current_width + w > 100) {
                lines += 1;
                current_width = w;
            } else {
                current_width += w;
            }
        }
        return {lines, current_width};
    }
};
