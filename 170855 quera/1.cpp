#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[200],b[200],c[200];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    for(int i=0;i<n;i++){
        if(b[i] < 2*a[i] && c[i] < 2*a[i]){
            cout<<"Pizza fits on the table."<<endl;
        }
        else{
            cout<<"Pizza does not fit on the table."<<endl;
        }
    }
}