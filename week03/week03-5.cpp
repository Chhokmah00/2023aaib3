class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2=s+s;
        int N=s2.length();
        return s2.substr(1,N-2).find(s)!=string::npos; //nope對應:沒有這個位置 很大
        //substr()切字串 左1 右扣1(本來是0...N-1，現在變成1...N-2)
    }
};