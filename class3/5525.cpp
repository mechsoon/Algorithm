#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    // cout<<base<<"\n";
    int len;
    cin>>len;
    string str;
    cin>>str;
    int cnt=0;
    for(int i=0;i<len;i++){
        int k=0;
        if(str[i]=='O') continue;
        while(str[i+1]=='O' && str[i+2]=='I'){
            k++;
            if(k==N){
                cnt++;
                k--;
            }
            i+=2;
        }

    }
    cout<<cnt;
}