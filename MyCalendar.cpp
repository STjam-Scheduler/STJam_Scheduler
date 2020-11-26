#include "pch.h"
#include "MyCalendar.h"
#include "CalendarForm.h"

time_t MyCalendar::getCurrDate() {
	Window::CalendarForm::buttons[1]->Text = gcnew System::String("Hello World!");
	return time(0);
}

char* MyCalendar::printDate(const time_t t) {
	char out[80];
	struct tm* timeinfo;
	timeinfo = localtime(&t);

	strftime(out, 80, "%d, ", timeinfo);
	return out;
}
