class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if(n>0){ //用瘋狂程設的寫法，但n<0會失敗
            for(int i=0;i<n;i++){
                ans*=x;
            }
        }else if(n<0){ //特別針對n<0用負負得正，換成倒過來的形式
            for(int i=0;i<-n;i++){
                ans*=1/x;
            }
        }
        return ans;
    }
};