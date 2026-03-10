#include <iostream>
#include "Question1.h"
#include "Battery.h"

using namespace std;

int main()
{

    prc4::Student s{"Kat",{}};
    prc4::Student s1{"Pat",{}};
    prc4::Student s2{"Khan",{}};
    prc4::Student s3{"Loppy",{}};

    prc4::Course c{"Comp",{}};
    prc4::Course c2{"Math",{}};
    prc4::Course c3{"Stats",{}};

    prc4::enroll(&s,&c);
    prc4::enroll(&s3,&c);
    prc4::enroll(&s2,&c);
    prc4::enroll(&s1,&c);
    prc4::print_course(&c);

    prc4::enroll(&s,&c2);
    prc4::enroll(&s3,&c2);
    prc4::enroll(&s2,&c2);
    prc4::enroll(&s1,&c2);
    prc4::print_course(&c2);

    prc4::enroll(&s,&c3);
    prc4::enroll(&s3,&c3);
    prc4::enroll(&s2,&c3);
    prc4::enroll(&s1,&c3);
    prc4::print_course(&c3);

    prc4::print_student(&s);


    prc4::Battery b{200.8};
    b.drain(9.0);
    cout << b.get_remaining_capacity();

    return 0;
}
