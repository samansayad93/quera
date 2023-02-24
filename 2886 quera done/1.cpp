#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int a1,b1;
    a1 = (12-a)%12;
    b1 = (60 - b)%60;
    if(a1<10 && b1<10){
        cout<<'0'<<a1<<":0"<<b1<<endl;
    }
    else if(a1<10){
        cout<<'0'<<a1<<":"<<b1<<endl;
    }
    else if(a1>=10 && b1<10){
        cout<<a1<<":0"<<b1<<endl;
    }
    else{
        cout<<a1<<":"<<b1<<endl;
    }
}