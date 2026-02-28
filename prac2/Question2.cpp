#include<cmath>
#include<iostream>
#include "Question2.h"

    void rotate_point(prc2::Point& point, double angle){
        point.x = point.x*cos(angle)+ point.y*sin(angle);
        point.y = -point.x*sin(angle)+point.y*cos(angle);
    }


    
