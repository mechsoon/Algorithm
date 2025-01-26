#include <iostream>
#include <deque>


using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    while(N--){
        deque<int> dq;
        string cmd;
        cin>>cmd;
        int num;
        cin>>num;
        string arr;
        cin>>arr;
        string temp="";
        for(int i=1;i<arr.size();i++){
            if(arr[i]==',' || arr[i]==']'){
                if(temp!=""){
                    dq.push_back(stoi(temp));
                    temp="";
                }
            }else{
                temp+=arr[i];
            }
        }
        bool fro=0;
        bool CountD=0;
        for(int j=0;j<cmd.length();j++){
            if(cmd[j]=='D' && dq.empty()){
                CountD=1;
                break;
            }else if(cmd[j]=='R'){
                fro=!fro;
            }
            else if(cmd[j]=='D'){
                if(!fro){
                    dq.pop_front();
                }else{
                    dq.pop_back();
                }
            }
        }
        if(CountD){
            cout<<"error"<<"\n";
        }else{
            if(!fro){
                cout<<"[";
                for(int i=0;i<dq.size();i++){
                    if(i==dq.size()-1){
                        cout<<dq[i]<<"]";
                    }else cout<<dq[i]<<",";
                }
            }else{
                cout<<"[";
                for(int i=dq.size()-1;i>=0;i--){
                    if(i==0){
                        cout<<dq[i]<<"]";
                    }else cout<<dq[i]<<",";
                }
            }cout<<"\n";
        }

    }
}