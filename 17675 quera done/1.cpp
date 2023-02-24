#include<iostream>

using namespace std;

int main(){
    int n,a,b,temp,i=1;
    cin>>n;
    a=1;
    b=1;
    while(i<=n){
        if(i<=b){
            if(i==b){
                cout<<"+";
            }
            else{
                cout<<"-";
            }
        }
        if(i == b){
            temp = b;
            b += a;
            a = temp;
        }
        i++;
    }
}