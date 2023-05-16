#include<iostream>

using namespace std;

int prime(int num){
    int i,temp=1;
    for(i=2;(i<=num/2)&&temp;i++){
        if(num%i==0){
            temp=0;
        }
    }
    return temp;
}

int main(){
    int a,b;
    cin>>a>>b;
    while(a<=b){
        if(prime(a)){
            cout<<a<<endl;
        }
        a++;
    }
}
