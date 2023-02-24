#include<iostream>
#include<math.h>

using namespace std;

int square(int a,int b){
    int count=0;
    int j;
    double i=sqrt(a);
    if(i == (int)i){
        j=i;
    }
    else{
        j=(int)i+1;
    }
    while(pow(j,2)<=b){
        count++;
        j++;
    }
    cout<<count<<endl;
    return 0;
}

int main(){
    int a,b,q;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>a>>b;
        square(a,b);
    }
}