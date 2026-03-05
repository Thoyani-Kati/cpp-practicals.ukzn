#ifndef QUESTION1_H
#define QUESTION1_H


namespace prc3{
    typedef struct {int day;int month;long year;} Date;
    typedef long Days;
    bool is_leap_year(long year);
    Days to_days(Date& date);
    Days days_in_month(int month,long year);
    Days get_difference(Date& date , Date& date1);
}
#endif // QUESTION1_H
