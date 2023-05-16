#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    const double pi = 3.14159;
    cin>>n;
    int a[100],b[100],c[100],d[100];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    for(int i=0;i<n;i++){
        double output = 0;
        if(a[i] == c[i]){
            output = abs(b[i]-d[i]);
        }
        else if(b[i] == d[i]){
            output = abs(a[i]-c[i]);
        }
        else{
            if(b[i] > c[i] || a[i] > d[i]){
                if(a[i] == 0){
                    output = abs(b[i] - c[i]) + (pi/2)*c[i];
                }
                else{
                    output = abs(a[i] - d[i]) + (pi/2)*d[i];
                }
            }
            else{
                if(a[i] == 0){
                    output = abs(b[i] - c[i])+ (pi/2)*b[i];
                }
                else{
                    output = abs(a[i] - d[i]) + (pi/2)*a[i];
                }
            }
        }
        cout<<output<<endl;
    }
}