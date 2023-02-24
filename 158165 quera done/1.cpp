#include<iostream>

using namespace std;

void func(long long a){
    long long result ;
    if(a>1023){
        result = a/1024;
        if(result>1023){
            result /= 1024;
            cout<<result<<"MiB"<<endl;
        }
        else{
            cout<<result<<"KiB"<<endl;
        }
    }
    else{
        cout<<a<<'B'<<endl;
    }
}

int main(){
    long long n,a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        func(a[i]);
    }
}