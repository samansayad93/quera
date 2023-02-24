<<<<<<< HEAD
#include<iostream>

using namespace std;

int main(){
    int n;
    string s = "codecup6";
    cin>>n;
    if(n%8 == 0){
        cout<<s[7]<<endl;
    }
    else{
        cout<<s[(n%8)-1]<<endl;
    }
=======
#include<iostream>

using namespace std;

int main(){
    int n;
    string s = "codecup6";
    cin>>n;
    if(n%8 == 0){
        cout<<s[7]<<endl;
    }
    else{
        cout<<s[(n%8)-1]<<endl;
    }
>>>>>>> 9b92165495e12e6e51fcb6dbd9e7ee8b0d9e4712
}