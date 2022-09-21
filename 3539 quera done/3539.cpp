#include<iostream>

using namespace std;

int main(){
    long long int a,b;
    cin>>a;
    while(a>9){
        b=0;
        while(a>0){
            b+=a%10;
            a/=10;
        }
        a=b;
    }
    cout<<a<<endl;
}
