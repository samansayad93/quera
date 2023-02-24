#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n,temp;
    int a[100],b[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int j=0;
    for(int i=0;i<n;i+=2){
        if(n%2 == 0){
            b[i] = a[j];
            b[i+1] = a[n-j-1];
            j++;
        }
        else{
            if(i != n-1){
                b[i] = a[j];
                b[i+1] = a[n-j-1];
                j++;
            }
            else{
                b[n-1] = a[j];
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}