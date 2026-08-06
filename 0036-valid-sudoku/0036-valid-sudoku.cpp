class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
                if(board[i][j]=='.'){
                    continue;
                }
                char a=board[i][j];

                for(int k=0;k<board[i].size();k++){
                    if(j==k){continue;}
                    if(a==board[i][k]){
                        return false;
                    }  
                }
                for(int k=0;k<board.size();k++){
                    if(i==k){continue;}
                    if(a==board[k][j]){
                        return false;
                    }
                }
                int b=i;
                int c=j;
                b=(b/3)*3;
                c=(c/3)*3;
                int y=b+3;
                int z=c+3;
                for(int b=(i/3)*3;b<y;b++){
                    for(int c=(j/3)*3;c<z;c++){
                        if(i==b&&j==c){
                            continue;
                        }
                        if(a==board[b][c]){
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};