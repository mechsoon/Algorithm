#include <iostream>
#include <vector>
#include <queue>

#define X first
#define Y second

int arr[1005][1005];
int N,M;
int vis[1005][1005];
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};


using namespace std;


void bfs(vector<pair<int,int>>& vec)
{
    queue<pair<int,int>> q;
    for(int j=0;j<vec.size();j++){
        q.push({vec[j].X,vec[j].Y});
        vis[vec[j].X][vec[j].Y]=1;
        arr[vec[j].X][vec[j].Y]=0;
    }
   
    while(!q.empty()){
        int curx=q.front().X;
        int cury=q.front().Y;
        q.pop();

        for(int i=0;i<4;i++){
            int nx=curx+dx[i];
            int ny=cury+dy[i];
            if(nx<0 || nx>=M ||ny<0 || ny>=N) continue;
            if(vis[nx][ny]==1 || arr[nx][ny]==-1) continue;
            arr[nx][ny]=arr[curx][cury]+1;
            vis[nx][ny]=1;
            q.push({nx,ny});
        }
    }

}

int main(){
    ios::sync_with_stdio(0);
    vector<pair<int,int>> tmt;
    cin>>N>>M;
    int CntZero=0;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
            if(arr[i][j]==0){
                CntZero++;
            }
            if(arr[i][j]==1){
                tmt.push_back({i,j});
            }
        }
    }
    if(CntZero==0){
        cout<<0;return 0;
    }
    bfs(tmt);
    for(auto t:tmt){
        arr[t.X][t.Y]=1;
    }
    int maxe=-1;
    int result=-1;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(arr[i][j]==0){
                cout<<-1;
                result=0;
                break;
            }else{
                maxe=max(maxe,arr[i][j]);    
            }
            // cout<<arr[i][j]<<" ";
        }
    }
    cout<<maxe;

