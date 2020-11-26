#include "pch.h"
#include "MyCalendar.h"
#include "CalendarForm.h"

time_t MyCalendar::getCurrDate() {
	return time(0);
}

std::string MyCalendar::printDate(const time_t t, const char* format) {
	char out[80];
	struct tm* timeinfo;
	timeinfo = localtime(&t);

	strftime(out, 80, format, timeinfo);
	std::string str(out);
	return str;
}

void MyCalendar::setStartDayPos() {
	time_t currDate = getCurrDate();
	int month = stoi(printDate(currDate, "%m")); // > set curr month ToDo: List of month names with indexes 0-11
	int dayofmonth = stoi(printDate(currDate, "%e"));
	int weekday = stoi(printDate(currDate, "%u")); // > "x-Coordinate" eventuell muss noch in array index übersetzt werde (0 ist wohl hier sunday)
	int weekofmonth = 0; //"y-Coordinate"

	for (int i = 1; i < 6; i++) {
		if ((dayofmonth / 7) <= i) {
			weekofmonth = i - 1;
		}
	}

	Window::CalendarForm::buttons[weekofmonth, weekday]->Text = gcnew System::String("XXXXXXX");

}
