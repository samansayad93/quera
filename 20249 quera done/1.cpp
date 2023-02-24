#include<iostream>

using namespace std;

int main(){
    int k,n,t=0,a,i=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        t+=a;
    }
    while(t>0){
        t-=k;
        i++;
    }
    cout<<n-i<<endl;
}