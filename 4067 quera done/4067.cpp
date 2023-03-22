#include <iostream>
#include<math.h>

using namespace std;

int check(int a,int b){
    if(a%2 == 0 && b%2 == 1){
        return -1;
    }
    if(a%2 == 1 && b%2 == 0){
        return -1;
    }
    if(abs(a-b) != 0 && abs(a-b) != 2){
        return -1;
    }
    if(a%2 == 0){
        return a+b;
    }
    else{
        return a+b-1;
    }
}


int main(){
    int a[100],b[100],t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<t;i++){
        cout<<check(a[i],b[i])<<endl;
    }
}
