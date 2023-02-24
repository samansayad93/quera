#include<iostream>

using namespace std;

int main(){
    int A[6];
    for(int i=0;i<6;i++){
        cin>>A[i];
    }
    cout<<1-A[0]<<' ';
    cout<<1-A[1]<<' ';
    cout<<2-A[2]<<' ';
    cout<<2-A[3]<<' ';
    cout<<2-A[4]<<' ';
    cout<<8-A[5]<<endl;
}