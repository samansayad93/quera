#include<iostream>

using namespace std;

int main(){
    int n,a[100],i,min=101,j;
    double total=0;
    int x,y;
    cin>>n;
    cin>>x>>y;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]<min){
            min = a[i];
            j=i;
        }
    }
    a[j]=100;
    for(i=0;i<n;i++){
        total += 100-a[i];
    }
    if(total/y != (int)total/y){
        total+=(y-((int)total%y));
    }
    if(min/x != (int)min/x){
        min-=(min%x);
    }
    if(total/y > min/x){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}