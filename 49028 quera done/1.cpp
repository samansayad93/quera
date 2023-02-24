#include<iostream>

using namespace std;

int main(){
    int n,a,b,i=1,count=0;
    cin>>n;
    cin>>b;
    while(i<n){
        cin>>a;
        if(a != b){
            count++;
        }
        b=a;
        i++;
    }
    cout<<count<<endl;
}