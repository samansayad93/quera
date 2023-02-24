#include<iostream>

using namespace std;

int main(){
    int n,k,x;
    cin>>n>>k>>x;
    for(int i=0;i<x;i++){
        n = (n*2)-k;
    }
    cout<<n<<endl;
}