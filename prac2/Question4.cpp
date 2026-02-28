#include"Question4.h"

class Roman{
    std::vector<char> romans{};
    int value_of_char(char ch){
    //return romans.indexOf();
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