#include<iostream>

using namespace std;

int main(){
    int n,r;
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
           r+=i;
        }
    }
    if(r==n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
