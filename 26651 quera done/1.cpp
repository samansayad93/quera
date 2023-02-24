#include<iostream>

using namespace std;

int main(){
    int n,a[100],b[100],i,sum=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    for(i=0;i<n;i++){
        sum += a[i]*b[i];
    }
    cout<<sum<<endl;
}