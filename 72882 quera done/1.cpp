#include<iostream>

using namespace std;

int main(){
    int n,m,total;
    int p1=0,p2=0;
    char c;
    cin>>n>>m;
    total = m*n;
    for(int i=0;i<total;i++){
        cin>>c;
        switch (c)
        {
        case '*':
            p1++;
            break;
        default:
            break;
        }
    }
    for(int i=0;i<total;i++){
        cin>>c;
        switch (c)
        {
        case '*':
            p2++;
            break;
        default:
            break;
        }
    }
    cout<<p1<<' '<<p2<<endl;
}