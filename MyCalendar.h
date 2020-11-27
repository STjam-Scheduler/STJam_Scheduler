#pragma once
#include <ctime>
#include <vector>
#include <string>


class MyCalendar
{
public:
	static std::string currSelectedMonth;
	static int currSelectedYear;
	static int xStartPos;
	static int yStartPos;
	static int next_xStartPos;
	static int prev_xStartPos;

	static void initializeCalendar();

	static time_t getCurrDate();
	static bool isLeapYear(int year);

	static char* printDate_ch(const time_t t, const char* format);
	static std::string printDate_str(const time_t, const char* format);

	static void setYear(const time_t t);
	static void setYear(int year);
	static void setMonth(const time_t t);
	static void setMonth(std::string monthname);
	static void setStartDayPos();
	static void setUpRest();

	static void resetAllBtns();

	static void nextMonth();
	static void prevMonth();
};
