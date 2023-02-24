#include<iostream>

using namespace std;

int main() {
    int n,i;
    cin>>n;
    float a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>15)
            cout<<"cooler"<<endl;
        else
            cout<<"heater"<<endl;
    }
}
