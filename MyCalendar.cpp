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
		January.name = "January";
		January.days = 31;
		months.push_back(January);
		February.name = "February";
		February.days = 28;
		months.push_back(February);
		March.name = "March";
		March.days = 31;
		months.push_back(March);
		April.name = "April";
		April.days = 30;
		months.push_back(April);
		May.name = "May";
		May.days = 31;
		months.push_back(May);
		June.name = "June";
		June.days = 30;
		months.push_back(June);
		July.name = "July";
		July.days = 31;
		months.push_back(July);
		August.name = "August";
		August.days = 31;
		months.push_back(August);
		September.name = "September";
		September.days = 30;
		months.push_back(September);
		October.name = "October";
		October.days = 31;
		months.push_back(October);
		November.name = "November";
		November.days = 30;
		months.push_back(November);
		December.name = "December";
		December.days = 31;
		months.push_back(December);

		int i;
		for (auto& month : months) {
			month.index = i++;
		}
	}

	Month getMonth(std::string monthname) {
		Month m;
		int i = 0;
		for (int i = 0; i < months.size(); i++) {
			if (months[i].name.compare(monthname) == 0) {
				m = months[i];
				break;
			}
		}
		return m;
	}
}


/// <summary>
/// global static variables of MyCalendar.cpp
/// </summary>
std::string MyCalendar::currSelectedMonth = "Default";
int MyCalendar::currSelectedYear = 0;
int MyCalendar::xStartPos = 0;
int MyCalendar::yStartPos = 0;
int MyCalendar::next_xStartPos = 0;
int MyCalendar::prev_xStartPos = 0;


time_t MyCalendar::getCurrDate() {
	return time(0);
}

bool MyCalendar::isLeapYear(int year) {
	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

#pragma region set/get/reset()
void MyCalendar::setYear(const time_t t = getCurrDate()) {
	currSelectedYear = stoi(printDate_str(t, "%Y"));

	std::string s = std::to_string(currSelectedYear);
	char const* year_pchar = s.c_str();
	Window::CalendarForm::yearLabel->Text = gcnew System::String(year_pchar);
}
void MyCalendar::setYear(int year) {
	std::string s = std::to_string(year);
	char const* year_pchar = s.c_str();
	Window::CalendarForm::yearLabel->Text = gcnew System::String(year_pchar);
}
void MyCalendar::setMonth(const time_t t = getCurrDate()) {
	currSelectedMonth = printDate_str(t, "%B");
	Window::CalendarForm::monthLabel->Text = gcnew System::String(currSelectedMonth.c_str());
}
void MyCalendar::setMonth(std::string monthname) {
	currSelectedMonth = monthname;
	Window::CalendarForm::monthLabel->Text = gcnew System::String(monthname.c_str());
}


void MyCalendar::resetAllBtns() {
	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 7; x++) {
			Window::CalendarForm::buttons[y, x]->Text = gcnew System::String("");
		}
	}
}

void MyCalendar::setStartDayPos() {
	resetAllBtns();
	setYear();
	setMonth();
	time_t currDate = getCurrDate();

	int month = stoi(printDate_str(currDate, "%m"));		// > set curr month ToDo: List of month names with indexes 0-11
	int dayofmonth = stoi(printDate_str(currDate, "%e"));
	int weekday = stoi(printDate_str(currDate, "%u"));			// > "x-Coordinate"
	int weekofmonth = 0;										//"y-Coordinate"

	if (weekday == 0) {											// 0 = sunday -> index 0 to 6
		weekday = 6;
	}
	else {														// 1-6 = mo-sa -> index-=1 + sunday=6	=> mo-so (0-6)
		weekday--;
	}


	for (int i = 1; i < 7; i++) {
		if (((dayofmonth + 5 - weekday) / 7) < i) {
			weekofmonth = i - 1;
			break;
		}
	}

	xStartPos = weekday;
	yStartPos = weekofmonth;

	//Window::CalendarForm::buttons[weekofmonth, weekday]->Text = gcnew System::String(printDate_ch(currDate, "%e")); only for debugging
}
void MyCalendar::setUpRest() {
	time_t currDate = getCurrDate();
	int dayofmonth = stoi(printDate_str(currDate, "%e"));

	int wayUntilZero = yStartPos * 7 + xStartPos;
	int moveFromZero = wayUntilZero - dayofmonth + 1;

	int startY = moveFromZero / 7;
	int startX = moveFromZero % 7;
	if (startX < 0) {
		startX = 6;
	}

	if (isLeapYear(currSelectedYear))		//Leap Year Check
		MyMonth::months[1].days = 29;
	else
		MyMonth::months[1].days = 28;


	int day = 1;
	bool firstRun = true;
	int x = 0;
	for (int y = startY; y < 6; y++) {		//ToDo: Fill all Days, not only the days of this month if(y >= startY)... etc attention if(x>= startX) only once -> need prev Month.days for pre Month + reset day counter to 0 after month end
		for (x = 0; x < 7; x++) {
			if (day > MyMonth::getMonth(currSelectedMonth).days) //ToDo: Get Month.days automatic through func()
				break;

			if (firstRun)
				x = startX;
			firstRun = false;

			Window::CalendarForm::buttons[y, x]->Text = gcnew System::String((std::to_string(day++)).c_str());
		}
		if (day > MyMonth::getMonth(currSelectedMonth).days) {
			if (x > 6)
				x = 0;

			next_xStartPos = x;
			break;
		}
	}

	prev_xStartPos = startX - 1;
	if (prev_xStartPos < 0)
		prev_xStartPos = 6;
}
#pragma endregion

#pragma region print()
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
#pragma endregion


void MyCalendar::nextMonth() {
	resetAllBtns();

	prev_xStartPos = next_xStartPos - 1;
	if (prev_xStartPos < 0)
		prev_xStartPos = 6;

	if (currSelectedMonth != "December") {
		setMonth(MyMonth::months[MyMonth::getMonth(currSelectedMonth).index + 1].name);
	}
	else{										//Check for Leap Year if new currSelectedYear
		setYear(++currSelectedYear);

		setMonth("January");

		if (isLeapYear(currSelectedYear))
			MyMonth::months[1].days = 29;
		else
			MyMonth::months[1].days = 28;
	}

	int day = 1;
	int x = 0;
	bool firstRun = true;
	for (int y = 0; y < 6; y++) {
		for (x = 0; x < 7; x++) {
			if (day > MyMonth::getMonth(currSelectedMonth).days)
				break;

			if (firstRun)
				x = next_xStartPos;
			firstRun = false;

			Window::CalendarForm::buttons[y, x]->Text = gcnew System::String((std::to_string(day++)).c_str());
		}
		if (day > MyMonth::getMonth(currSelectedMonth).days) {
			if (x > 6)
				x = 0;

			next_xStartPos = x;
			break;
		}
	}
}
void MyCalendar::prevMonth() {
	resetAllBtns();

	next_xStartPos = prev_xStartPos + 1;
	if (next_xStartPos > 6)
		next_xStartPos = 0;

	if (currSelectedMonth != "January") {
		setMonth(MyMonth::months[MyMonth::getMonth(currSelectedMonth).index - 1].name);		
	}
	else {									//Check for Leap Year if new currSelectedYear
		setYear(--currSelectedYear);

		setMonth("December");

		if (isLeapYear(currSelectedYear))
			MyMonth::months[1].days = 29;
		else
			MyMonth::months[1].days = 28;
	}

	int day = MyMonth::getMonth(currSelectedMonth).days;
	int x = 0;
	int y = ((MyMonth::getMonth(currSelectedMonth).days + 6 - next_xStartPos) / 7); //MyMonth::getMonth(currSelectedMonth).days / 7;
	if (next_xStartPos == 0)
		y--;
	bool firstRun = true;

	for (y; y >= 0; y--) {
		for (x = 6; x >= 0; x--) {
			if (day < 1)
				break;

			if (firstRun)
				x = prev_xStartPos;
			firstRun = false;

			Window::CalendarForm::buttons[y, x]->Text = gcnew System::String((std::to_string(day--)).c_str());
		}
		if (day < 1) {
			if (x < 0)
				x = 6;

			prev_xStartPos = x;
			break;
		}
	}
}


#pragma region backgroundcolor
void MyCalendar::setSickDay(System::Windows::Forms::Button^ thisBtn) {
	thisBtn->BackColor = System::Drawing::Color::RosyBrown;
}

void MyCalendar::setVacation(System::Windows::Forms::Button^ thisBtn) {
	thisBtn->BackColor = System::Drawing::Color::DarkSeaGreen;
}

void MyCalendar::setTimeEntered(System::Windows::Forms::Button^ thisBtn) {
	thisBtn->BackColor = System::Drawing::Color::LightGray;
}

void MyCalendar::setHoliday(System::Windows::Forms::Button^ thisBtn) {
	thisBtn->BackColor = System::Drawing::SystemColors::ControlDarkDark;
}

void MyCalendar::resetBackgrounds() {
	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 6; x++) {
			Window::CalendarForm::buttons[y, x]->BackColor = System::Drawing::SystemColors::ControlLightLight;
		}
	}
}

void MyCalendar::resetoneBackground(System::Windows::Forms::Button^ thisBtn) {
	thisBtn->BackColor = System::Drawing::SystemColors::ControlLightLight;
}
#pragma endregion



void MyCalendar::initializeCalendar() {
	MyMonth::initializeMonths();
	setStartDayPos();
	setUpRest();
}