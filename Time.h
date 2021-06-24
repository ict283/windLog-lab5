// For review purposes only! Does not represent the actual solution!

#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Time
{
public:

    Time();

    Time(Y);

    ~Time();

    Y GetHour();

    Y SetHour(Y);

    Y GetMin();

    Y SetMin(Y);

private:

    Y hr;
    Y min;
};

    ostream & operator <<(Y);

    istream & operator >>(Y);

#endif
