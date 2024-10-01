#include "extra-task-1.h"
#include <cassert>;
#include <cmath>

using namespace std;

double seconds_difference(double time_1, double time_2){
    return time_2 - time_1;
}

double hours_difference(double time_1, double time_2){
    return (time_2-time_1)/3600.0;

}

double to_float_hours(int hours, int minutes, int seconds){
    assert(minutes >= 0 & minutes < 60);
    assert(seconds >= 0 & seconds < 60);
    return hours + (minutes / 60.0) + (seconds / 3600.0);
}

double to_24_hour_clock(double hours){
    assert(hours >= 0);
    double res = fmod(hours, 24.0);
    if (res < 0) res += 24.0;
    return res;
}
//    three functions
//    they are used to determine the hours part, minutes part and seconds part 
//    of a time in seconds. e.g.:
int get_hours(int seconds) {
    return seconds / 3600;
}

int get_minutes(int seconds) {
    return (seconds % 3600)/60;
}

int get_seconds(int seconds) {
    return seconds % 60;
}

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
