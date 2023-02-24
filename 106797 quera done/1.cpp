#include <iostream>
#include<math.h>

using namespace std;

int prime(int a){
    if(a==1){
        return 0;
    }
    for(int i=2;i<=sqrt(a);i++){
        if(a%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int x,y,k;
    cin>>x>>y>>k;
    int arr[10000];
    for(int i=0;i<x*y;i++){
        cin>>arr[i];
    }
    int x1=0,y1=0;
    for(int i=0;i<k;i++){
        int temp = arr[(y*x1+y1)];
        if(prime(temp)){
            x1 = (x-x1-1)%x;
            y1 = (y-y1-1)%y;
        }
        else{
            if(temp%4 == 0){
                y1++;
                if(y1>=y){
                    y1-=y;
                }
            }
            else if(temp%4 == 1){
                x1++;
                if(x1>=x){
                    x1-=x;
                }
            }
            else if(temp%4 == 2){
                y1--;
                if(y1<0){
                    y1+=y;
                }
            }
            else if(temp%4 == 3){
                x1--;
                if(x1<0){
                    x1+=x;
                }
            }
        }
    }
    cout<<x1+1<<" "<<y1+1<<endl;
}