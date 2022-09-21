#include<iostream>

using namespace std;

int main(){
    int a,min=1;
    cin>>a;
    int A[a];
    for(int i=0;i<a;i++){
        cin>>A[i];
        if(A[i]<=min){
            min=A[i];
        }
    }
    cout<<min<<endl;
}
