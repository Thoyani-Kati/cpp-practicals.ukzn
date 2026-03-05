
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



    Days get_difference(Date& date1, Date& date2){
        return std::abs(to_days(date1) - to_days(date2));
    }


}
