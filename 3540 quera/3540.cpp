#include<iostream>

using namespace std;

int main(){
    int n,x,y,i;
    cin>>n>>x>>y;
    if(n%x==0||n%y==0){
    for(i=0;i<=n;i++){
        if((n-x*i)%y==0&&(n-x*i)/y>=0){
            cout<<i<<" "<<(n-x*i)/y<<endl;
            return(0);
        }
    }}
    else{
        cout<<"-1"<<endl;
    }
}
