class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int b5=0,b10=0,b20=0; //一開始鈔票0張
        for(int b:bills){
            if(b==5) b5++; //客拿5元鈔，直接收起
            else if(b==10){ //客拿10元鈔，看能不能找錢
                if(b5==0) return false; //沒錢可找
                b10++; //多1張10元鈔
                b5--; //少一張5元鈔
            }else{ //客拿20元鈔，找1張10元、1張5元
                if(b10>0 && b5>0){
                    b20++;
                    b10--;
                    b5--;
                }
                else if(b5>=3){
                    b20++;
                    b5-=3;
                }else return false;//沒錢可找
            }
        }
        return true;
    }
};