#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int vis[1001][1001]={0,};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    
    vector<vector<int>> vec(N,vector<int>(M,0));
    int x,y;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>vec[i][j];
            if(vec[i][j]==2){
                x=i;
                y=j;
            }
        }
    }
    queue<pair<int,int>> q;
    q.push({x,y});
    vis[x][y]=1;
    vec[x][y]=0;

    while(!q.empty()){
        int cur_x=q.front().first;
        int cur_y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=cur_x+dx[i];
            int ny=cur_y+dy[i];
            if (nx<0 || nx>=M || ny<0 || ny>=N) continue;
            if(vis[nx][ny]==1 || vec[nx][ny]==0) continue;
            vec[nx][ny]=vec[cur_x][cur_y]+1;
            vis[nx][ny]=1;
            q.push({nx,ny});

        }

    }
    // vec[x][y]=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(vec[i][j]==1 && vis[i][j]==0){
                cout<<-1<<" ";
            }
            else{
                cout<<vec[i][j]<<" ";
            }
        }cout<<"\n";
    }

}