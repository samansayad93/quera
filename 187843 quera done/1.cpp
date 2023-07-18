#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        if(i%2 == 0){
            for(int j=0;j<m;j++){
                cout<<i*m+j+1<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j=0;j<m;j++){
                cout<<(i+1)*m-j<<" ";
            }
            cout<<endl;
        }
    }
}