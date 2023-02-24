#include<iostream>
#include<math.h>

using namespace std;

int fact(int i){
    int fact =1;
    while(i>1){
        fact *= i;
        i--;
    }
    return fact;
}

int main(){
    int x,n,a,total=0;
    cin>>a>>x>>n;
    for(int k=0;k<=n;k++){
        total += fact(n)/fact(k)/fact(n-k)*pow(x,k)*pow(a,n-k);
    }
    cout<<total<<endl;
}