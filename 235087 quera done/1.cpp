#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map< pair<char,char>,string > mapstring;
    mapstring[{'R','R'}] = "F";
    mapstring[{'R','U'}] = "RF";
    mapstring[{'R','L'}] = "RRF";
    mapstring[{'R','D'}] = "RRRF";
    mapstring[{'U','U'}] = "F";
    mapstring[{'U','L'}] = "RF";
    mapstring[{'U','D'}] = "RRF";
    mapstring[{'U','R'}] = "RRRF";
    mapstring[{'L','L'}] = "F";
    mapstring[{'L','D'}] = "RF";
    mapstring[{'L','R'}] = "RRF";
    mapstring[{'L','U'}] = "RRRF";
    mapstring[{'D','D'}] = "F";
    mapstring[{'D','R'}] = "RF";
    mapstring[{'D','U'}] = "RRF";
    mapstring[{'D','L'}] = "RRRF";
    cout<<mapstring[{'R',s[0]}];
    for(int i=1;i<n;i++){
        cout<<mapstring[{s[i-1],s[i]}];
    }
}