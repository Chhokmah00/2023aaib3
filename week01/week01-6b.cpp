//使用剝皮法，再左右比對，不同就ans++
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=0; //迴圈前面ans=0
        while(start>0 || goal>0){
            if(start%2 != goal%2) ans++; //不合就++
            start/=2; //剝
            goal/=2; //剝
       } 
       return ans; //迴圈後面 return ans
    }
};