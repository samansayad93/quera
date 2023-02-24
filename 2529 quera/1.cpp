#include<iostream>
#include<string.h>

using namespace std;

void func(string arr[],int arrint[],int n){
    for(int i=0;i<n;i++){
        int temp = arr[i].length();
        int z=0;
        for(int j=0;j<temp;j++){
            for(int k=j+1;k<temp;k++){
                if(arr[i][j] == arr[i][k]){
                    z++;
                }
            }
        }
        arrint[i] = temp - z;
    }
}

void sort(int arrint[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arrint[j] < arrint[j-1]){
                temp = arrint[j];
                arrint[j] = arrint[j-1];
                arrint[j-1] = temp;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    string arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arrint[100];
    func(arr,arrint,n);
    sort(arrint,n);
    cout<<arrint[n-1]<<endl;
}