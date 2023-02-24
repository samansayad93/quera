#include<iostream>

using namespace std;

int main(){
    int n,flag=0;
    int a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n-1;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            cout<<"Ey baba :("<<endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"Bah Bah! Ajab jooji!"<<endl;
    }
}