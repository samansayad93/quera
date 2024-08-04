#include <iostream>
#include <math.h>

using namespace std;

int main(){
    long n;
    cin>>n;
    double a,b,k,temp;
    for(long i=0;i<n;i++){
        cin>>a>>b>>k;
        temp = ceil((k-a)/(a-b));
        temp++;
        cout<<temp<<endl;
    }
    return 0;
}