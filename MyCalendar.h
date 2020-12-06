#pragma once
#include <ctime>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>


class MyCalendar
{
public:
	std::string currSelectedMonth;
	int currSelectedYear;
	int xStartPos;
	int yStartPos;
	int next_xStartPos;
	int prev_xStartPos;

	void initializeCalendar();

	time_t getCurrDate();
	bool isLeapYear(int year);

	char* printDate_ch(const time_t t, const char* format);
	std::string printDate_str(const time_t, const char* format);

	void setYear(const time_t t);
	void setYear(int year);
	void setMonth(const time_t t);
	void setMonth(std::string monthname);
	void setStartDayPos();
	void setUpRest();

	void resetAllBtns();

	void nextMonth();
	void prevMonth();

	/* methods to change backgroundcolor */
	void setSickDay(System::Windows::Forms::Button^);
	void setVacation(System::Windows::Forms::Button^);		// Ferien
	void setTimeEntered(System::Windows::Forms::Button^);
	void setHoliday(System::Windows::Forms::Button^);		// Feiertag
	void resetoneBackground(System::Windows::Forms::Button^);
	void resetBackgrounds();

	/* set Flextime/Vacationdays/Worktime */
	void setFlextime();
	void setVacationdays();
	void setWorktime();
};
