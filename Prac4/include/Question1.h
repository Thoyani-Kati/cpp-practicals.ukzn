#ifndef QUESTION1_H
#define QUESTION1_H
#include <vector>
#include <string>


namespace prc4{
    struct Course;
     struct Student {
         std::string name;
         std::vector<Course*> registered_courses;
         };

    struct Course {
        std::string name ;
         std::vector<Student*> enrolled_students;
        };

    void print_student(Student* s);
    void print_course(Course* c);
    void enroll(Student* s, Course* c);

}
#endif // QUESTION1_H
