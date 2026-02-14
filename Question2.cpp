#include<iostream>
#include "Question2.hpp"
#include<string>

namespace prc{

     void timeBreakerCal(long largeSec){
        int days = largeSec/86400;
        int hours= ((largeSec%86400))/3600;
        int minutes = ((((largeSec%86400))%3600))/60;
        int  sec =((((largeSec%86400))%3600))%60;

        std::cout << largeSec << " s is = " << days<<" Day/s, "<<
            hours<<" Hour/s, "<<
            minutes<<" Minute/s, "<<
            sec<<" Second/s"<< std::endl;
    }

     void testQ2(){

                std::cout <<"++++++++++++++++++++++++++++++++++++++++++++QUESTION 2 TESTING IN PROGRESS...++++++++++++++++++++++++++++++++++++++++++++\n\n\n";
        double s;

        std::cout<<"\nEnter number of seconds : ";
        std:: cin >> s;
        timeBreakerCal(s);
    }

}