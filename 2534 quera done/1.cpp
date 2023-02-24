#include<iostream>

using namespace std;

int main(){
    int n,a[10000],count = 0,avg,total=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        total += a[i];
    }
    avg = total/n;
    for(int i=0;i<n;i++){
        if(a[i]<avg){
            count += avg - a[i];
        }
    }
    cout<<count<<endl;
}