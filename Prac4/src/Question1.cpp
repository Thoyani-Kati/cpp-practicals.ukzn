#include "Question1.h"
#include <iostream>
namespace prc4{
void print_student(Student* s){

    std::cout<<"Student name : "<<s->name<<"\n";
    std::cout<<"Registered Courses :\n";
     for(const auto &c : s->registered_courses){
        std::cout<< c->name << "\n";
     }
}
void print_course(Course* c){
     std::cout<<"Course name : " << c->name<<"\n";
     std::cout<<"Enrolled Students :"<<"\n";
     for(const auto &s : c->enrolled_students){
        std::cout<< s->name << "\n";
     }
}
void enroll(Student* s, Course* c){
    s->registered_courses.push_back(c);
    c->enrolled_students.push_back(s);
}
}
