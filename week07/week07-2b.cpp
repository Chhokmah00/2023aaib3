class Solution {
public:
    void myDrawBoard(int board[3][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){ //印出模擬的棋盤內容
                cout<<board[i][j]<<' ';
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    bool testwin(int board[3][3],int now){
        if(board[0][0]==now && board[0][1]==now && board[0][2]==now) return true; //上橫
        if(board[1][0]==now && board[1][1]==now && board[1][2]==now) return true; //中橫
        if(board[2][0]==now && board[2][1]==now && board[2][2]==now) return true; //下橫
        //再來是直的
        if(board[0][0]==now && board[1][0]==now && board[2][0]==now) return true; //上直
        if(board[0][1]==now && board[1][1]==now && board[2][1]==now) return true; //中直
        if(board[0][2]==now && board[1][2]==now && board[2][2]==now) return true; //下直
        //斜的
        if(board[0][0]==now && board[1][1]==now && board[2][2]==now) return true; //左上右下
        if(board[2][0]==now && board[1][1]==now && board[0][2]==now) return true; //右上左下
        return false;
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3]={}; //C的陣列，裡面都放0代標沒有人放東西
        int now=1; //把now=3-now就會跳動了
        //myDrawBoard(board);
        for(auto move:moves){ //C++進階迴圈
            int i=move[0],j=move[1]; //取出陣列裡的值
            board[i][j]=now;
            //myDrawBoard(board);
            if(testwin(board,now)){
                if(now==1) return "A";
                else return "B";
            }
            now=3-now;
        }
        if(moves.size()==9) return "Draw";
        else return "Pending";    
    }
};