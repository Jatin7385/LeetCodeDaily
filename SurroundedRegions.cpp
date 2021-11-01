class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board.at(0).size();
        for(int i=0;i<n;i++)//Checking the first and last row
        {
            if(board[0][i] == 'O'){DFS(board,0,i);}
            if(board[m-1][i] == 'O'){DFS(board,m-1,i);}
        }
        for(int i=0;i<m;i++)//Checking the first and last column
        {
            if(board[i][0] == 'O'){DFS(board,i,0);}
            if(board[i][n-1] == 'O'){DFS(board,i,n-1);}
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j] == 'O')
                {
                    board[i][j] = 'X';
                }
                else if(board[i][j] == '#')
                {
                    board[i][j] = 'O';
                }
            }
        }
    }
    
    void DFS(vector<vector<char>>& board,int i,int j)
    {
        if(i<0||i>board.size()-1||j<0||j>board.at(0).size()-1||board[i][j]!='O')
        {
            return;
        }
        board[i][j] = '#';
        DFS(board,i+1,j);
        DFS(board,i-1,j);
        DFS(board,i,j+1);
        DFS(board,i,j-1);
    }
};
