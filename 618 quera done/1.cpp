#include<iostream>

using namespace std;

int main(){
    int n,j=1,k;
    cin>>n;
    k=n;
    for(int z=0;z<n;z++){
        for(int i=0;i<k;i++){
            cout<<' ';
        }
        for(int i=0;i<2*j-1;i++){
            cout<<'*';
        }
        cout<<endl;
        j++;
        k--;
    }
    for(int i=0;i<2*n+1;i++){
        cout<<'*';
    }
    cout<<endl;
    j=n;
    k=1;
    for(int z=0;z<n;z++){
        for(int i=0;i<k;i++){
            cout<<' ';
        }
        for(int i=0;i<2*j-1;i++){
            cout<<'*';
        }
        cout<<endl;
        j--;
        k++;
    }
}