#include<iostream>

using namespace std;

int main(){
    int a,b,c,d,m;
    cin>>a>>b>>c>>d>>m;
    if(c*m-a>b || d*m-b>a){
        cout<<"Eyval baba!"<<endl;
    }
    else{
        cout<<"Naaa, eshtebahe!"<<endl;
    }
}