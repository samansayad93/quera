#include <iostream>

using namespace std;

int main(){
    int w,n;
    cin>>w>>n;
    int area=0;
    int n1,n2;
    for(int i=0;i<n;i++){
        cin>>n1>>n2;
        area += n1*n2;
    }
    cout<<area/w<<endl;
}