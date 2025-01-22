#include <string>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int N;
    cin>>N;
    map<string,int> m;
    while(N--){
        string str;
        cin>>str;
        // cout<<str<<"\n";
        if(str.length()>=6 && str.substr(str.size()-6)=="Cheese"){
            m[str]=1;
        }
    }
    int result=0;
    for(auto i:m){
        // cout<<i.first<<" "<<i.second<<"\n";
        if(i.second){
            result++;
        }
    }
    if(result>=4){
        cout<<"yummy";
    }else{
        cout<<"sad";
    }

}