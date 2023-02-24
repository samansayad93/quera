#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c=2,d=2;
    while(c*d<=a+b){
        while(c*d<=a+b){
            if(c*d == a+b){
                if((c-2)*(d-2) == b){
                    if(d>c){
                        d+=c;
                        c = d -c;
                        d -= c;
                    }
                    cout<<c<<" "<<d<<endl;
                    return 0;
                }
            }
            d++;
        }
        c++;
        d=2;
    }
}