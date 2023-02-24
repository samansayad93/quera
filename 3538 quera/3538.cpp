#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int n1,n2,n3,count,temp;
    int a[7]={0};
    string input;
    cin>>n1;
    for(int i=0;i<n1;i++){
        cin>>input;
        switch (input[0])
        {
        case 's':
            temp = 0;
            break;
        case '1':
            temp = 1;
            break;
        case '2':
            temp = 2;
            break;
        case '3':
            temp = 3;
            break;
        case '4':
            temp = 4;
            break;
        case '5':
            temp = 5;
            break;
        case 'j':
            temp = 6;
            break;
        }
        a[temp]++;
    }
    cin>>n2;
    for(int i=0;i<n2;i++){
        cin>>input;
        switch (input[0])
        {
        case 's':
            temp = 0;
            break;
        case '1':
            temp = 1;
            break;
        case '2':
            temp = 2;
            break;
        case '3':
            temp = 3;
            break;
        case '4':
            temp = 4;
            break;
        case '5':
            temp = 5;
            break;
        case 'j':
            temp = 6;
            break;
        }
        a[temp]++;
    }
    cin>>n3;
    for(int i=0;i<n3;i++){
        cin>>input;
        switch (input[0])
        {
        case 's':
            temp = 0;
            break;
        case '1':
            temp = 1;
            break;
        case '2':
            temp = 2;
            break;
        case '3':
            temp = 3;
            break;
        case '4':
            temp = 4;
            break;
        case '5':
            temp = 5;
            break;
        case 'j':
            temp = 6;
            break;
        }
        a[temp]++;
    }
    for(int i=0;i<7;i++){
        if(a[i] == 0){
            count++;
        }
    }
    cout<<count<<endl;
}
