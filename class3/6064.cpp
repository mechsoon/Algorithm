#include <iostream>
#include <vector>

using namespace std;
//  
// 1 1
// 2 2
// 3 3
// 4 4
// 5 5
// 6 6
// 7 7
// 8 8
// 9 9
// 10 10
// 1 11
// 2 12
// 3 1


int main(){
    int num;
    cin>>num;
    int M,N,x,y;

    // int cnt=1;
    for(int i=0;i<num;i++){
        int M,N,x,y;
        cin>>M>>N>>x>>y;
        int cnt=-1;
        for(int i=x;i<=N*M;i+=M){
            int ny=i%N;
            if(ny==0){
                ny=N;
            }
            if(ny==y){
                cnt=i;
                break;
            } 
        }
        if(cnt==-1) cout<<-1<<"\n";
        else{
            cout<<cnt<<"\n";
        }

    }


}