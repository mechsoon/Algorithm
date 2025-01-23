#include <iostream>
#include <vector>

using namespace std;

int arr[256];
int N;
vector<vector<int>> vec(2200,vector<int>(2200,0));

bool check(int x, int y, int n) {
  for (int i = x; i < x + n; i++)
  for (int j = y; j < y + n; j++)
    if (vec[x][y] != vec[i][j])
    return false;
  return true;
}
int cnt[3];

void recursion(int x,int y,int size){
    if(check(x,y,size)){
        cnt[vec[x][y]+1]++;
        return;
    }
    for(int i=x;i<x+size;i+=size/3){
        for(int j=y;j<y+size;j+=size/3){
            recursion(i,j,size/3);
        }
    }

}


int main(){
    cin>>N;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>vec[i][j];
        }
    }
    recursion(0,0,N);
    for(int i=0;i<3;i++){
        cout<<cnt[i]<<"\n";
    }
}