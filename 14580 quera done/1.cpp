#include<iostream>

using namespace std;

int main(){
    int n,x,k;
    cin>>n>>x>>k;
    string channel[100];
    for(int i=0;i<n;i++){
        cin>>channel[i];
    }
    k = k%n;
    x += k;
    x = x%n;
    if(x == 0){
        cout<<channel[n-1]<<endl;
    }
    else{
        cout<<channel[x-1]<<endl;
    }
}