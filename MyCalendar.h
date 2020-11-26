#pragma once
#include <ctime>
#include <vector>
#include <string>


ref class MyCalendar
{
public:
	static time_t getCurrDate();
	static std::string printDate(const time_t, const char* format);
	static void setStartDayPos();
};

