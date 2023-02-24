#include<iostream>

using namespace std;

void sort(int *a,int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i] > a[j]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

int main(){
    int a[100000],b[100000],c[100000],d;
    int count=0;
    cin>>d;
    for(int i=0;i<d;i++){
        cin>>a[i];
    }
    for(int i=0;i<d;i++){
        cin>>b[i];
    }
    for(int i=0;i<d;i++){
        if(b[i] == 1){
            c[i] = a[i];
            count++;
        }
        else{
            c[i] = 200000;
        }
    }
    sort(c,d);
    for(int i=0;i<count;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
}