#include <iostream>
#include <vector>

// vector<int> vec(64);
int num[2];
using namespace std;
vector<string> vec(64);

bool check(int x,int y,int n){
    for(int i=x;i<x+n;i++){
        for(int j=y;j<y+n;j++){
            if(vec[i][j]!=vec[x][y])
                return 0;
        }
    }
    return 1;
}


void search(int x,int y,int n){
    if(check(x,y,n)){
        if(vec[x][y]=='1'){
            cout<<1;
        }else{
            cout<<0;
        }
        return ;
    }
    cout<<"(";
    search(x,y,n/2);
    search(x,y+n/2,n/2);
    search(x+n/2,y,n/2);
    search(x+n/2,y+n/2,n/2);
    cout<<")";



}


int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>vec[i];
    search(0,0,n);

}