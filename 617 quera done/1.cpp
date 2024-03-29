#include <bits/stdc++.h>

using namespace std;
/* Iterative function to reverse digits of num*/
int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

/*Driver program to test reversDigits*/
int main()
{
    int num;
    cin>>num;
    if(num==reversDigits(num)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
