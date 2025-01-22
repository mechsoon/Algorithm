#include <iostream>

using namespace std;
int d[51];
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>d[i];
    }
    if((d[2]-d[1])==(d[1]-d[0])){
        cout<<d[N-1]+d[2]-d[1];
    }else{
        cout<<d[N-1]*(d[2]/d[1]);
    }
}