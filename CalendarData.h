#pragma once
#include <vector>
#include <string>
using namespace std;
//Daten des Users für den aktuellen Monat
class CalendarData{
private:
	int month;
	int days;
	vector<time_t> worktime_start;
	vector<time_t> worktime_end;
	vector<time_t> breaktime_start;
	vector<time_t> breaktime_end;
	vector<bool> sickdays;
	vector<bool> vacationdays;
	vector<string> comments;
};
