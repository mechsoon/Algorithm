#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string base="I";
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        base+="OI";
    }
    // cout<<base<<"\n";
    int len;
    cin>>len;
    string str;
    cin>>str;
    int cnt=0;
    for(int i=0;i<=len-base.length()+1;i++){
        string temp="";
        for(int j=0;j<base.length();j++){
            temp+=str[j+i];
        }
        // cout<<temp<<"\n";
        if(temp==base){
            cnt++;
        }
    }
    cout<<cnt;
}