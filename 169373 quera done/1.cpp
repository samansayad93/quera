#include <iostream>

using namespace std;

int main(){
    int a,b,q=1,r;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>r;
        if(b == 0 && a-r == 0){
            cout<<"Yes"<<endl;
            continue;
        }
        else if(b == 0){
            cout<<"No"<<endl;
            continue;
        }
        if((a-r)%b == 0){
            cout<<"Yes"<<endl;
            continue;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}