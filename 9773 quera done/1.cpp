#include<iostream>

using namespace std;

int main(){
    int n,i=1;
    cin>>n;
    int a = n/2;
    while(i<=n){
        for(int j=0;j<a;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*a;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
        a--;
        i+=2;
    }
    i=n-2;
    a=1;
    while(i>0){
        for(int j=0;j<a;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*a;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
        a++;
        i-=2;
    }
}