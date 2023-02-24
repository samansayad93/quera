#include<iostream>

using namespace std;

int prime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int a,b;
    cin>>a>>b;
    a++;
    while(a<b){
        if(prime(a) == 1){
            cout<<a<<",";
        }
        a++;
    }
}