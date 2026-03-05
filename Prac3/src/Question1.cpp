
#include "Question1.h"
#include <cmath>
namespace prc3{

    Days to_days(Date& date) {

        Days days = date.day;
        days += (date.year * 365);

        long y = date.year - 1;
        long leap_days = (y / 4) - (y / 100) + (y / 400);

        days += leap_days;
        //For the remaining months that don't make up a year.
        for (int m = 1; m < date.month; m++) {
            days += days_in_month(m, date.year);
        }

        return days;
    }

    bool is_leap_year(long year)
    {return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));}

    Days days_in_month(int month,long year){
        switch(month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return 31;
            case 4: case 6: case 9: case 11:
                return 30;
            case 2:
                return is_leap_year(year) ? 29 : 28;
            default:
                return 0;
        }
    }

    Days get_difference(Date& date1, Date& date2){
        return std::abs(to_days(date1) - to_days(date2));
    }


}
