#include<iostream>

using namespace std;

int main(){
    int n,a[1000],kmm,max,day;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    kmm = a[0];
    for(int i=1;i<n;i++){
        if(a[i]>kmm)
            max = a[i];
        else
            max = kmm;
        while (true)
        {
            if(max %a[i] == 0 && max %kmm == 0){
                kmm = max;
                break;
            }
            max++;
        }
    }
    day = (kmm + 1)%30;
    cout<<day<<endl;
    
}