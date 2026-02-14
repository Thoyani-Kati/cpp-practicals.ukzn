#include<iostream>
#include <cmath>
#include "Question3.hpp"


namespace prc{ 


void locatePoint(const Point& point,double r){
    double d = sqrt((point.x*point.x)+(point.y*point.y));
    if(d<r)
        std::cout << "The point is inside the circle.\n";
    else if(d==r)
        std::cout<<"The point is on the boundary of the circle.\n";
    std::cout<< "The point is outside the circle.\n";
}
    void testQ3(){
                std::cout <<"++++++++++++++++++++++++++++++++++++++++++++QUESTION 3 TESTING IN PROGRESS...++++++++++++++++++++++++++++++++++++++++++++\n\n\n";
        double x,y,r;
        std::cout<<"Getting point coordinates\n\nEnter x value : ";
        std:: cin>> x;

        std::cout<<"\nEnter Y value : ";
        std:: cin>> y;

        std::cout<<"Getting circle(0,0) radius\n\nEnter the radius : ";
        std:: cin>> r;
        
        Point p {x,y};

        locatePoint(p,r);
    }
}