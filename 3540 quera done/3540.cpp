#include<iostream>

using namespace std;

int main(){
    long long  n,x,y;
    cin>>n>>x>>y;
    long long i=0,j=0;
    long long temp = n;
    while(n>0){
        i++;
        n-=x;
        if(n%y == 0){
            j = n/y;
            break;
        }
    }
    if(temp%x != 0 && j == 0){
        cout<<-1<<endl;
    }
    else{
        cout<<i<<" "<<j;
    }
}
