//用函式呼叫函式簡化問題
class Solution {
public:
    double myPow(double x,long long int n) {
        if(n==0) return 1; //1*x*x*x*x
        if(n<0){ //遇到負的n，那就負負得正，同時把x變成分母
            n=-n;
            x=1/x; //因為x的-1次方式1/x
        }
        if(n%2==0){
            double now=myPow(x,n/2); //一半的x相乘
            return now*now; //左一半右一半在相乘
        }else{ //奇數個相乘
            double now=myPow(x,n/2);
            return now*now*x;
        }
    }
};