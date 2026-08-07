class Solution {
public:
    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};
    int mxi=0;
    int cnt=0;
    int n,m;
    void dfs(int i,int j,vector<vector<int>>&grid){
        cnt++;
        grid[i][j]=0;
        for(int it=0;it<4;it++){
            int nx=i+dx[it];
            int ny=j+dy[it];
            if(nx<0 || ny<0 || nx>=n || ny>=m) continue;
            if(grid[nx][ny]==1) dfs(nx,ny,grid);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){
                    cnt=0;
                    dfs(i,j,grid);
                    mxi=max(mxi,cnt);
                }
            }
        }
        return mxi;
    }
};
