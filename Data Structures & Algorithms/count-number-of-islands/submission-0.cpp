class Solution {
public:
    int cnt=0;
    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};
    int n,m;
    void dfs(int i,int j,vector<vector<char>>&grid){
        grid[i][j]='0';
        for(int k=0;k<4;k++){
            int ni=dx[k]+i;
            int ny=dy[k]+j;
            if(ni<0 || ny<0 || ni>=n || ny>=m) continue;
            if(grid[ni][ny]=='1') dfs(ni,ny,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        n=grid.size();
        m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1') {
                    dfs(i,j,grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
