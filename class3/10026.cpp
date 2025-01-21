#include <iostream>
#include <vector>
#include <string>
#include <queue>


using namespace std;
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};

int main(){

    int N;
    cin>>N;
    vector<string> vec(N);
    for(int j=0;j<N;j++){
        string temp;
        cin>>vec[j];
    }
    for(int i=0;i<2;i++){
        int vis[N][N];
        fill(&vis[0][0],&vis[N-1][N],0);
        int cnt=0;


        if(i==0){
            for(int j=0;j<N;j++){
                for(int k=0;k<N;k++){
                    if(vis[j][k]==0 && vec[j][k]=='B'){
                        cnt++;
                        // cout<<j<<" "<<k<<" "<<cnt<<"\n";
                        queue<pair<int,int>> q;
                        q.push({j,k});
                        vis[j][k]=1;
                        while(!q.empty()){
                            int cur_x=q.front().first;
                            int cur_y=q.front().second;
                            q.pop();
                            for(int i=0;i<4;i++){
                                int nx=cur_x+dx[i];
                                int ny=cur_y+dy[i];
                                if(nx<0 || nx>=N || ny<0 ||ny>=N) continue;
                                if(vis[nx][ny]!=0) continue;
                                if(vec[nx][ny]=='B'){
                                    vis[nx][ny]=1;
                                    q.push({nx,ny});
                                }

                            }

                        }
                    }
                    else if(vis[j][k]==0 && vec[j][k]=='R'){
                        cnt++;
                        // cout<<j<<" "<<k<<" "<<cnt<<"\n";
                        queue<pair<int,int>> q;
                        q.push({j,k});
                        vis[j][k]=1;
                        while(!q.empty()){
                            int cur_x=q.front().first;
                            int cur_y=q.front().second;
                            q.pop();
                            for(int i=0;i<4;i++){
                                int nx=cur_x+dx[i];
                                int ny=cur_y+dy[i];
                                if(nx<0 || nx>=N || ny<0 ||ny>=N) continue;
                                if(vis[nx][ny]!=0) continue;
                                if(vec[nx][ny]=='R'){
                                    vis[nx][ny]=1;
                                    q.push({nx,ny});
                                }

                            }

                        }
                    }
                    else if(vis[j][k]==0 && vec[j][k]=='G'){
                        cnt++;
                        // cout<<j<<" "<<k<<" "<<cnt<<"\n";
                        queue<pair<int,int>> q;
                        q.push({j,k});
                        vis[j][k]=1;
                        while(!q.empty()){
                            int cur_x=q.front().first;
                            int cur_y=q.front().second;
                            q.pop();
                            for(int i=0;i<4;i++){
                                int nx=cur_x+dx[i];
                                int ny=cur_y+dy[i];
                                if(nx<0 || nx>=N || ny<0 ||ny>=N) continue;
                                if(vis[nx][ny]!=0) continue;
                                if(vec[nx][ny]=='G'){
                                    vis[nx][ny]=1;
                                    q.push({nx,ny});
                                }

                            }

                        }
                    }

                }
            }
        }
        else{
            for(int j=0;j<N;j++){
                for(int k=0;k<N;k++){
                    if(vis[j][k]==0 && vec[j][k]!='B'){
                        cnt++;
                        // cout<<j<<" "<<k<<" "<<cnt<<"\n";
                        queue<pair<int,int>> q;
                        q.push({j,k});
                        vis[j][k]=1;
                        while(!q.empty()){
                            int cur_x=q.front().first;
                            int cur_y=q.front().second;
                            q.pop();
                            for(int i=0;i<4;i++){
                                int nx=cur_x+dx[i];
                                int ny=cur_y+dy[i];
                                if(nx<0 || nx>=N || ny<0 ||ny>=N) continue;
                                if(vis[nx][ny]!=0) continue;
                                if(vec[nx][ny]=='R' || vec[nx][ny]=='G'){
                                    vis[nx][ny]=1;
                                    q.push({nx,ny});
                                }

                            }

                        }
                    }
                    else if(vis[j][k]==0 && vec[j][k]=='B'){
                        cnt++;
                        // cout<<j<<" "<<k<<" "<<cnt<<"\n";
                        queue<pair<int,int>> q;
                        q.push({j,k});
                        vis[j][k]=1;
                        while(!q.empty()){
                            int cur_x=q.front().first;
                            int cur_y=q.front().second;
                            q.pop();

                            for(int i=0;i<4;i++){
                                int nx=cur_x+dx[i];
                                int ny=cur_y+dy[i];
                                if(nx<0 || nx>=N || ny<0 ||ny>=N) continue;

                                if(vis[nx][ny]!=0) continue;


                                if(vec[nx][ny]=='B'){
                                    vis[nx][ny]=1;
                                    q.push({nx,ny});
                                }

                            }
                        }
                    }
                    
                    
                }
            }
        }
        cout<<cnt<<" ";
       

    }
}