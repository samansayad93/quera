#include<iostream>

using namespace std;

long bmm1(long a,long b,long n){
    if(n<2){
        return 1;
    }
    else if(a%n ==0 && b%n == 0){
        return n ;
    }
    return bmm1(a,b,n-1);
}

int main(){
    long a,b,n;
    long bmm,kmm;
    cin>>a>>b;
    if(a>=b){
        n = a;
    }
    else{
        n = b;
    }
    bmm = bmm1(a,b,n);
    kmm = a*b/bmm;
    cout<<bmm<<" "<<kmm<<endl;
}