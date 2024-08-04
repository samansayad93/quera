#include <iostream>
#include <string>

using namespace std;

int main(){
    long n;
    cin>>n;
    for(long i=0;i<n;i++){
        string a,b;
        cin>>a;
        b.append("#");
        for(int j=1;j<=6;j++){
            if('F' - a[j] + '0' <= 64 && 'F' - a[j] + '0' >= 58){
                b += 'F' - a[j] + '0' - 7;
            }
            else{
                b += 'F' - a[j] + '0';
            }
        }
        cout<<b<<endl;
    }
}