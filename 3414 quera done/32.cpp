#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (a==c){
       cout<<"Vertical"<<endl;
    }
    else if (b==d){
        cout<<"Horizontal"<<endl;
    }
    else {
        cout<<"Try again"<<endl;
    }
}
