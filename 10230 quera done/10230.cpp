#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c==180){
        if(a>0&&b>0&&c>0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else{
        cout<<"No"<<endl;
    }
}
