#include<iostream>

using namespace std;

int main(){
    int n,Q,i=0,a=0,b=0;
    int A[10000],S[10000],K[10000];
    int total=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    cin>>Q;
    for(i=0;i<Q;i++){
        cin>>S[i]>>K[i];
    }
    for(i=0;i<Q;i++){
        a=S[i]+K[i]*b-1;
        while(a<n){
            total += A[a];
            b++;
            a=S[i]+K[i]*b-1;
        }
        cout<<total<<endl;
        b=0;
        total = 0;
    }
}