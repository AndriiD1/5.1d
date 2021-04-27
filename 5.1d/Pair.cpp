#include "Pair.h"
Pair::Pair()
{
    first = 0;
    second = 0;
}
Pair::Pair(double f, double s)
{
    double first = f, second = s;
    SetFirst(first);
    SetSecond(second);
}
Pair::Pair(const Pair& r)
{
    first = r.first;
    second = r.second;
}
Pair::~Pair(void) { }

ostream& operator << (ostream& out, const Pair& r)
{
    out << string(r);
    return out;
}
Pair::operator string () const
{
    stringstream sstr;
    sstr << endl << " ( " << first << " , " << second << " )" << endl << endl;
    return sstr.str();
}

Pair& Pair::operator = (const Pair& r)
{
    first = r.first;
    second = r.second;
    return *this;
}

bool operator > (Pair& a, Pair& b)
{
    if (a.first > b.second)
        return true;
    else
        return false;
}

bool operator < (Pair& a, Pair& b)
{
    if (a.first < b.second)
        return true;
    else
        return false;
}

bool operator == (Pair& a, Pair& b)
{
    if (a.first == b.second)
        return true;
    else
        return false;
}