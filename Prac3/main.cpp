#include <iostream>
#include"Question1.h"

using namespace std;
int main()
{
    prc3::Date date {1,2,2023}, date2{12,2,2023};
    cout<< "Difference is : "<< prc3::get_difference(date,date2) <<endl;

    return 0;
}
