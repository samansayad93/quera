#include<iostream>

using namespace std;

long long factt(long long a){
    long long fact =1;
    for(int i=1;i<=a;i++){
        fact *= i;
    }
    return fact;
}

int main(){
    long long a,b,count=0;
    cin>>a>>b;
    long long fact = factt(a);
    cout<<fact<<endl;
    while(fact>0){
        if(b == fact%10){
            count++;
        }
        fact /= 10;
    }
    cout<<count<<endl;
}