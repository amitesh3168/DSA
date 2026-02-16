class Solution {
public:
    int reverseBits(int n) {
         string s = bitset<32>(n).to_string();
        reverse(s.begin(),s.end());
        int num = stoi(s, 0, 2);
        return num;
    }
};