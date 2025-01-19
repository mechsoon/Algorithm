#include <iostream>
#include <queue>
#include <vector>
#define X first
#define Y second
using namespace std;

// bool vis[50][50];
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};

void bfs(vector<vector<int>>& board,vector<vector<bool>>& vis,int x,int y,int M,int N){
    queue<pair<int,int>> Q;
    Q.push({x,y});
    vis[x][y]=1;
    while(!Q.empty()){
        pair<int,int> now=Q.front();
        Q.pop();
        for(int i=0;i<4;i++){
            int nx=now.X+dx[i];
            int ny=now.Y+dy[i];
            if (nx<0 || nx>=M || ny<0 || ny>=N) continue;
            if (vis[nx][ny] || board[nx][ny]!=1) continue;
            vis[nx][ny]=1;
            Q.push({nx,ny});
        }

    }


}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int M,N,K;
        cin>>M>>N>>K;
        vector<vector<int>> board(M,vector<int>(N,0));
        for (int j=0;j<K;j++)
        {
            int x,y;
            cin>>x>>y;
            board[x][y]=1;
        }
        int count=0;
        vector<vector<bool>> vis(M,vector<bool>(N,0));
        
        for(int p=0;p<M;p++){
            for(int k=0;k<N;k++){
                if (vis[p][k]!=1 && board[p][k]==1){
                    count++;
                    bfs(board,vis,p,k,M,N);
                }
            }
        }
        cout<<count<<"\n";

        




    }
}