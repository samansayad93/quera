#include<iostream>

using namespace std;

int main(){
    int A[1000],i=0;
    A[0]=1;
    while(A[i]!=0){
        i++;
        cin>>A[i];
    }
    i=i-1;
    for(i;i>0;i--){
        cout<<A[i]<<endl;
    }
}
