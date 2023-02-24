#include<iostream>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    if(n%m != 0){
        cout<<(n/m)+1<<endl;
    }
    else{
        cout<<n/m<<endl;
    }
}