#include<iostream>

using namespace std;

int main(){
    int n,m,total=0;
    cin>>n>>m;
    int arr[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int ax,ay;
    for(int i=0;i<m;i++){
        cin>>ax>>ay;
        total += arr[ax-1][ay-1];
    }
    cout<<total<<endl;
}