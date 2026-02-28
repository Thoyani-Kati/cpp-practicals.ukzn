#ifndef QUEST2
#define QUEST2
#include<cmath>
#include<iostream>

namespace prc2{
    struct Point
    {
        double x;double y;
        void show_coordinates(){
            std::cout<<"("<<x<<" , "<<y<<")\n";
        }
    };

    void rotate_point(Point& point, double angle);


    
}
#endif