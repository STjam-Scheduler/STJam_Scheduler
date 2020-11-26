#include "pch.h"
#include "MyCalendar.h"
#include "CalendarForm.h"
#include <vector>

namespace MyMonth {
	struct Month {
		int index;
		std::string name;
		int days;
	}January, February, March, April, May, June, July, August, September, October, November, December;

	std::vector<Month> months;

	void initializeMonths() {
		months.push_back(January);
		January.name = "January";
		January.days = 31;
		months.push_back(February);
		February.name = "February";
		February.days = 29;
		months.push_back(March);
		March.name = "March";
		March.days = 31;
		months.push_back(April);
		April.name = "April";
		April.days = 30;
		months.push_back(May);
		May.name = "May";
		May.days = 31;
		months.push_back(June);
		June.name = "June";
		June.days = 30;
		months.push_back(July);
		July.name = "July";
		July.days = 31;
		months.push_back(August);
		August.name = "August";
		August.days = 31;
		months.push_back(September);
		September.name = "September";
		September.days = 30;
		months.push_back(October);
		October.name = "October";
		October.days = 31;
		months.push_back(November);
		November.name = "November";
		November.days = 30;
		months.push_back(December);
		December.name = "December";
		December.days = 31;

		int i;
		for(Month month : months) {
			month.index = i++;
		}
	}
}




std::string MyCalendar::currSelectedMonth = "Default";
int MyCalendar::xStartPos = 0;
int MyCalendar::yStartPos = 0;


time_t MyCalendar::getCurrDate() {
	return time(0);
}

char* MyCalendar::printDate_ch(const time_t t, const char* format) {
	char out[80];
	struct tm* timeinfo;
	timeinfo = localtime(&t);

	strftime(out, 80, format, timeinfo);
	return out;
}

std::string MyCalendar::printDate_str(const time_t t, const char* format) {
	char out[80];
	struct tm* timeinfo;
	timeinfo = localtime(&t);

	strftime(out, 80, format, timeinfo);
	std::string str(out);
	return str;
}

void MyCalendar::setMonth(const time_t t = getCurrDate()) {
	currSelectedMonth = printDate_str(t, "%B");
	Window::CalendarForm::monthLabel->Text = gcnew System::String(currSelectedMonth.c_str());
}


void MyCalendar::setStartDayPos() {
	time_t currDate = getCurrDate();
	int month = stoi(printDate_str(currDate, "%m")); // > set curr month ToDo: List of month names with indexes 0-11
	int dayofmonth = stoi(printDate_str(currDate, "%e"));
	int weekday = stoi(printDate_str(currDate, "%u")); // > "x-Coordinate"
	int weekofmonth = 0; //"y-Coordinate"

	if (weekday == 0) {	// 0 = sunday -> index 0 to 6
		weekday = 6;
	}
	else{				// 1-6 = mo-sa -> index-=1 + sunday=6	=> mo-so (0-6)
		weekday--;
	}

	for (int i = 1; i < 6; i++) {
		if ((dayofmonth / 7) <= i) {
			weekofmonth = i - 1;
		}
	}

	xStartPos = weekday;
	yStartPos = weekofmonth;

	Window::CalendarForm::buttons[weekofmonth, weekday]->Text = gcnew System::String(printDate_ch(currDate, "%e"));
}
void MyCalendar::setUpRest() {
	time_t currDate = getCurrDate();
	int dayofmonth = stoi(printDate_str(currDate, "%e"));

	int wayUntilZero = yStartPos * 7 + xStartPos;
	int moveFromZero = wayUntilZero - dayofmonth + 1;

	int startY = moveFromZero / 7;
	int startX = moveFromZero % 7;

	int day = 1;
	bool firstRun = true;

	for (int y = startY; y < 6; y++) {		//ToDo: Fill all Days, not only the days of this month if(y >= startY)... etc attention if(x>= startX) only once -> need prev Month.days for pre Month + reset day counter to 0 after month end
		for (int x = 0; x < 7; x++) {
			if (firstRun)
				x = startX;
			firstRun = false;
			Window::CalendarForm::buttons[y, x]->Text = gcnew System::String((std::to_string(day++)).c_str());

			if (day > MyMonth::November.days) //ToDo: Get Month.days automatic through func()
				break;
		}
	}
}

void MyCalendar::initializeCalendar() {
	MyMonth::initializeMonths();
	setMonth();
	setStartDayPos();
	setUpRest();
}