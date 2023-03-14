#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a=0;
    string c;
    int b=0;
    cin>>c;
    int i=0;
    while(c[i] != 'e'){
        if(c[i] == '.'){
            continue;
        }
        a *= 10;
        a += c[i];
        i++;
    }
    // int output = 6 * b;
    // while(a>0){
    //     switch (a%10)
    //     {
    //     case 0:
    //         output += 6;
    //         break;
    //     case 1:
    //         output += 1;
    //         break;
    //     case 2:
    //         output += 5;
    //         break;
    //     case 3:
    //         output += 5;
    //         break;
    //     case 4:
    //         output += 4;
    //         break;
    //     case 5:
    //         output += 5;
    //         break;
    //     case 6:
    //         output += 6;
    //         break;
    //     case 7:
    //         output += 4;
    //         break;
    //     case 8:
    //         output += 7;
    //         break;
    //     case 9:
    //         output += 6;
    //         break;
    //     }
    //     a /= 10;
    // }
    cout<<a<<endl;
    return 0;
}