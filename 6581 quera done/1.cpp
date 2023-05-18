#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    double a = n*pow(2,k-1);
    double b = pow(2,k)-1;
    cout<<fixed;
    cout<<setprecision(4);
    cout<<a/b<<endl;
}