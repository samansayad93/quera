#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n,k;
    float c;
    cin>>n>>k;
    c=n;
    for(int i=0;i<k;i++){
        c=c/2;
    }
    c=floor(c);
    cout<<c<<endl;
}
