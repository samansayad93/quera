#include<iostream>

using namespace std;

long long bmm(long long a,long long b,long long n){
    if(n<2){
        return 1;
    }
    else if(a%n ==0 && b%n == 0){
        return n ;
    }
    return bmm(a,b,n-2);
}

int main(){
    long long a,b;
    cin>>a>>b;
    if(a<=b){
        long long n=b;
        cout<<bmm(a,b,n)<<endl;
    }
    else{
        long long n=a;
        cout<<bmm(a,b,n)<<endl;
    }
}