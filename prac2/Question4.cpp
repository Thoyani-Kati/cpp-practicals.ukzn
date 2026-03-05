#include"Question4.h"
#include<algorithm>

class Roman{
    
    std::vector<char> romans = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    std::vector<int> values = {1, 5, 10, 50, 100, 500, 1000};
    int value_of_char(char ch){
    return values[std::find(romans.begin(),romans.end(),ch) - romans.begin()];
}

int roman_to_decimal(std::string str){
    int total = 0;
    int first =0;int second=0;
    while(!str.empty()){
        first=value_of_char(str.at(0));
        second=value_of_char(str.at(1));
        if(str.length() == 1 || first <= second){
            total +=first;
            str.erase(str.at(0));

        }else{
            total+=second-first;
            str.erase(str.at(0));
            str.erase(str.at(0));
        }
    }
    return total;
}
};