#include "Question3.h"
#include<iostream>
#include<string>
using namespace prc2;

 int String_Numbers::divide(std::string str1,std::string str2){
    int divident = std::stoi(str1.substr(0,2));
    int divisor = std::stoi(str2);
   std::string result = "";
    int temp = divident/divisor;
    result += temp+"";
    
    int num = std::stoi(str2)*temp;
    return num;
    
 }

 int String_Numbers::subtract(std::string str1,std::string str2){
    int difference = std::stoi(str1.substr(0,2))- std::stoi(str2);
    std::string newStr1 = (difference+"") + str1.substr(2,str1.size());
    str1=newStr1;
    return std::stoi(str1);
 }

   void do_long_devision(std::string divident, std::string divisor){
      String_Numbers calculator{};
         std::cout<<divisor<<" | "<< divident;
         int num = calculator.divide(divident,divisor);
      while(num!=0){
         
         std::cout<<num<<"\n--";
         calculator.subtract(divident,divisor);
         std::cout<<divident<<"\n --";
         calculator.divide(divident,divisor);
      
      
      }
   }

