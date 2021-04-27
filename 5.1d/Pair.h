#pragma once
#include <iostream>
#include <sstream>
#include <iomanip>
#include <exception>
#include "MyException.h"

using namespace std;

class Pair
{
private:
	double first, second;
public:
	Pair();
	Pair(double, double);
	Pair(const Pair&);
	~Pair();

	double GetFirst() const { return first; }
	double GetSecond() const { return second; }

	void SetFirst(double first) { this->first = first; };
	void SetSecond(double second) { this->second = second; };

	operator string() const;
	friend ostream& operator << (ostream&, const Pair&);

	Pair& operator = (const Pair&);
	friend bool operator > (Pair& a, Pair& b);
	friend bool operator < (Pair& a, Pair& b);
	friend bool operator == (Pair& a, Pair& b);
};