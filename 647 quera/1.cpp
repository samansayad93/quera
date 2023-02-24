#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int m,n;
    int total=0;
    cin>>n>>m;
    for(int i=-10;i<=m;i++){
        for(int j=1;j<=n;j++){
            total += pow((i+j),3)/pow(j,2);
        }
    }
    cout<<total<<endl;
}