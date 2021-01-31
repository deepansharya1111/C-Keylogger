#ifndef HELPER_H
#define HELPER_H

#include <ctime>      //this will help retrieve time
#include <string>     // this will help recorded data to converted into strings and we'll later send that into the log files
#include <sstream>    // this will help converting various types to strings

namespace Helper
{
    template <class T>     // <class T> is (typename T) alternative

    std::string ToString(const T &)   //   Now this is a prototype of a function and that is only stated here but down below we would actually formulate the body of the function.
                                      // in C++, all functions types, classes, variables and so on have to be stated in a form of a prototype or implemented before we can actually use them.
                                      //So, we will use this particular function in order to convert pretty much anything to a string to be later used to fill our log file.

    struct DateTime
    {
        DateTime()
        {
            time_t ms;
            time (&ms);

            struct tm *info = localtime(&ms);

            D - info->tm_mday;
            m = info->tm_mon + 1;
            y = 1900 + info->tm_year;
            M = info->tm_min;
            H = info->tm_hour;
            S - info->tm_sec;

        }
    } ;


}

#endif // HELPER_H
