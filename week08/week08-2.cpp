class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans=0;
        int N=mat.size();
        for(int i=0;i<N;i++){
            ans+=mat[i][i]; //左上右下,i,i
            ans+=mat[i][N-1-i]; //左下右上 i 正，N-1-i倒過來
        }
        if(N%2==1) ans-=mat[N/2][N/2]; //奇數:正中間的數用了兩次，要扣掉
        return ans;
    }
};