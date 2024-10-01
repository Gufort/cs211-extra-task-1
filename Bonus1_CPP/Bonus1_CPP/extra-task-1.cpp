#include "extra-task-1.h"

using namespace std;

double seconds_difference(double time_1, double time_2){
    return time_2 - time_1;
}

double hours_difference(double time_1, double time_2){
    return (time_2-time_1)/3600;

}
//
//double to_float_hours(int hours, int minutes, int seconds)
//{
//    /*
//        return the total number of hours in the specified number
//        of hours, minutes, and seconds.
//
//        precondition: 0 <= minutes < 60  and  0 <= seconds < 60
//
//        >>> to_float_hours(0, 15, 0)
//        0.25
//
//        >>> to_float_hours(2, 45, 9)
//        2.7525
//
//        >>> to_float_hours(1, 0, 36)
//        1.01
//    */
//}
//
//double to_24_hour_clock(double hours)
//{
//    /*
//        hours is a number of hours since midnight. return the
//        hour as seen on a 24-hour clock.
//
//        precondition: hours >= 0
//
//        >>> to_24_hour_clock(24)
//        0
//        
//        >>> to_24_hour_clock(48)
//        0
//        
//        >>> to_24_hour_clock(25)
//        1
//        
//        >>> to_24_hour_clock(4)
//        4
//        
//        >>> to_24_hour_clock(28.5)
//        4.5
//        
//        you may wish to inspect various function in <cmath> to work
//        with integer and fractional part of a hours separately.
//        
//    */
//}
//
///*
//    implement three functions
//        * get_hours
//        * get_minutes
//        * get_seconds
//    they are used to determine the hours part, minutes part and seconds part 
//    of a time in seconds. e.g.:
//
//    >>> get_hours(3800)
//    1
//
//    >>> get_minutes(3800)
//    3
//
//    >>> get_seconds(3800)
//    20
//
//    in other words, if 3800 seconds have elapsed since midnight, 
//    it is currently 01:03:20 (hh:mm:ss).
//*/
//
//double time_to_utc(int utc_offset, double time)
//{
//    /*
//        return time at utc+0, where utc_offset is the number of hours away from
//        utc+0.
//        you may be interested in:
//        https://en.wikipedia.org/wiki/coordinated_universal_time
//
//        >>> time_to_utc(+0, 12.0)
//        12.0
// 
//        >>> time_to_utc(+1, 12.0)
//        11.0
// 
//        >>> time_to_utc(-1, 12.0)
//        13.0
// 
//        >>> time_to_utc(-11, 18.0)
//        5.0
// 
//        >>> time_to_utc(-1, 0.0)
//        1.0
// 
//        >>> time_to_utc(-1, 23.0)
//        0.0
//    */
//}
//
//double time_from_utc(int utc_offset, double time)
//{
//    /*
//        return utc time in time zone utc_offset.
//
//        >>> time_from_utc(+0, 12.0)
//        12.0
// 
//        >>> time_from_utc(+1, 12.0)
//        13.0
// 
//        >>> time_from_utc(-1, 12.0)
//        11.0
// 
//        >>> time_from_utc(+6, 6.0)
//        12.0
// 
//        >>> time_from_utc(-7, 6.0)
//        23.0
// 
//        >>> time_from_utc(-1, 0.0)
//        23.0
// 
//        >>> time_from_utc(-1, 23.0)
//        22.0
// 
//        >>> time_from_utc(+1, 23.0)
//        0.0
//    */
//}
