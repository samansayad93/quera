#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n,m;
    cin>>n;
    m=(n%100);
    if(n/100<10){
        cout<<"saal:"<<'0'<<n/100<<endl;
    }
    else if(n/100>9){
    cout<<"saal:"<<n/100<<endl;}
    if(m<10){
        cout<<"maah:"<<'0'<<m<<endl;
    }
    else{
        cout<<"maah:"<<m<<endl;
    }
}
