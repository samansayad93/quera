#include<iostream>

using namespace std;

int main(){
    int n,i=0,temp=0;
    cin>>n;
    while(i<=n/2){
        if((i+1)*(n-i+1) > temp){
            temp = (i+1)*(n-i+1);
            i++;
        }
    }
    cout<<temp<<endl;
}