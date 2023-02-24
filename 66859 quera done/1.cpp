#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main(){
    long long n,temp;
    string output;
    int b,i=0;
    cin>>n>>b;
    while(n>0){
        temp = n%b;
        n /= b;
        switch (temp)
        {
        case 10:
            output += 'A';
            break;
        case 11:
            output += 'B';
            break;
        case 12:
            output += 'C';
            break;
        case 13:
            output += 'D';
            break;
        case 14:
            output += 'E';
            break;
        case 15:
            output += 'F';
            break;
        default:
            output += to_string(temp);
            break;
        }
    }
    for(int i=output.length()-1;i>=0;i--){
        cout<<output[i];
    }
    cout<<endl;
}