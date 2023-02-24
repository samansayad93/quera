#include<iostream>

using namespace std;

int main(){
    int n,j=0;
    cin>>n;
    char arr[100][1000],a;
    for(int i=0;i<n;i++){
        cin>>a;
        while(a != '\n'){
            arr[i][j] = a;
            cin>>a;
            j++;
        }
        arr[i][j] = 0;
        j=0;
    }
}