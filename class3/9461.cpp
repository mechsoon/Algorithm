#include <iostream>
using namespace std;
int d[101];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    d[1]=1;
    d[2]=1;
    d[3]=1;
    d[4]=2;
    d[5]=2;

    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if (num==1) continue;
        else if (num==2) continue;
        else if (num==3) continue;
        else if (num==4) continue;
        else if (num==5) continue;
        for(int j=6;j<=num;j++){
            d[j]=d[j-1]+d[j-5];
        }
        cout<<d[num]<<"\n";
    }
    
}