class Solution {
public:
    void myDrawBoard(int board[3][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<board[i][j]<<' ';
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3]={}; //C的陣列，裡面都放0代標沒有人放東西
        myDrawBoard(board);
        for(auto move:moves){ //C++進階迴圈
            int i=move[0],j=move[1]; //取出陣列裡的值
            board[i][j]=1;
            myDrawBoard(board);
        }
        return "B"; //"A"or"B"or"Draw"平手    
    }
};