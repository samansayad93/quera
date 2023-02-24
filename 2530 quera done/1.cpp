#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main(){
    int n=0;
    string a;
    cin>>a;
    int lenght = a.length();
    for(int i=0;i<lenght;i++){
        switch (a[i])
        {
        case 'F':
            n++;
            break;
        case 'L':
            n++;
            break;
        case 'D':
            n++;
            break;
        case 'T':
            n++;
            break;
        default:
            break;
        }
    }
    cout<<pow(2,n)<<endl;
}