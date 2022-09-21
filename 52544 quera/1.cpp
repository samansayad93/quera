#include<iostream>
#include<cmath>

using namespace std;

int get_number_of_two(string line,int start, int end){
    int number_of_2 = 0;
    for(int i = start;i<end;i++)
        if(line[i]=='2')
            number_of_2++;
    return number_of_2;
}

int check_line_1(string line,int number_of_ticket){
    for(int i=0; i < line.length();i++)
        if(i<=2 || i>=6)
            if(line[i]=='0')
                return 0;
    int number_of_2 = get_number_of_two(line,3,6);
    return (number_of_ticket*pow(2,number_of_2));
}

int check_line_2(string line,int number_of_ticket){
    for (int i = 0; i < line.length(); i++) {
        if (i == 0 || i == 2 || i == 6 || i == 8)
            if (line[i] == '0')
                return 0;
        if (i == 1 || i == 7)
            if (line[i] == '1')
                return 0;
    }
    int number_of_2 = get_number_of_two(line, 3, 6);
    return number_of_ticket * pow(2, number_of_2);
}

int check_line_3(string line,int number_of_ticket){
    int number_of_2 = get_number_of_two(line, 0, 9);
    return number_of_ticket * pow(2, number_of_2);
}

int check_line(string line,int number_of_ticket,int line_index){
    if(line_index == 0 || line_index == 2 || line_index == 6 || line_index == 8){
        return check_line_1(line,number_of_ticket);
    }
    else if(line_index == 1 || line_index == 7){
        return check_line_2(line,number_of_ticket);
    }
    else{
        return check_line_3(line,number_of_ticket);
    }
}

int main(){
    int number_of_lines = 9;
    string line;
    int number_of_ticket = 1;
    for(int i=0;i<number_of_lines;i++){
        cin>>line;
        number_of_ticket=check_line(line,number_of_ticket,i);
    }
    cout<<number_of_ticket<<endl;
}
