#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
int d[50000];

int main(){
    vector<int> vec;
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        // cout<<(int) sqrt(i)<<"\n";
        if(i==(int) sqrt(i)*(int) sqrt(i)){
            d[i]=i;
        }
    }
    for(int i=1;i<=N;i++){
        d[i]=d[i-1]+d[1
        for(int j=1;j*j<=i;j++){
            d[i]=min(d[i],1+d[i-j*j]);
        }
    }
    cout<<d[N];

//  26   1 25  4 22 9 17 16 7
}