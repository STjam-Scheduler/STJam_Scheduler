#pragma once
#include <ctime>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>


class MyCalendar
{
public:
	static std::string currSelectedMonth;
	static int currSelectedYear;
	static int xStartPos;
	static int yStartPos;
	static int next_xStartPos;
	static int prev_xStartPos;

	static 	void initializeCalendar();

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

	/* methods to change backgroundcolor */
	static void setSickDay(System::Windows::Forms::Button^);
	static void setVacation(System::Windows::Forms::Button^);		// Ferien
	static void setTimeEntered(System::Windows::Forms::Button^);
	static void setHoliday(System::Windows::Forms::Button^);		// Feiertag
	static void resetoneBackground(System::Windows::Forms::Button^);
	static void resetBackgrounds();

	/* set Flextime/Vacationdays/Worktime */
	static void setFlextime();
	static void setVacationdays();
	static void setWorktime();
};
