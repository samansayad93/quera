#include <iostream>

using namespace std;

int main(){
    string month;
    cin>>month;
    if(month == "september" || month == "october" || month == "november"){
        cout<<"spring"<<endl;
    }
    else if(month == "december" || month == "january" || month == "february"){
        cout<<"summer"<<endl;
    }
    else if(month == "march" || month == "april" || month == "may"){
        cout<<"autumn"<<endl;
    }
    else if(month == "june" || month == "july" || month == "august"){
        cout<<"winter"<<endl;
    }
}