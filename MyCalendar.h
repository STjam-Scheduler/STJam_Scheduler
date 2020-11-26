#pragma once
#include <ctime>
#include <vector>
#include <string>


class MyCalendar
{
public:
	static std::string currSelectedMonth;
	static int xStartPos;
	static int yStartPos;

	static void initializeCalendar();

	static time_t getCurrDate();

	static char* printDate_ch(const time_t t, const char* format);
	static std::string printDate_str(const time_t, const char* format);

	static void setMonth(const time_t t);
	static void setStartDayPos();
	static void setUpRest();
};
