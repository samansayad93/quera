#include<iostream>

using namespace std;

int main(){
    int sum=0;
    int n,k,a;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        sum += a;
    }
    if(sum>=k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}