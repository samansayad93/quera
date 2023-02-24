#include <iostream>

using namespace std;

int main(){
    int a[5][5],max,max1;
    max=0;
    max1=0;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=3;j++){
            cin>>a[i][j];
            if(a[i][j] > max){
                max = a[i][j];
                max1 = i;
            }
        }
    }
    cout<<max1<<endl;
}