#pragma once
#include <ctime>
#include <vector>


ref class MyCalendar
{
public:
	static time_t getCurrDate();
	static char* printDate(const time_t);
};

