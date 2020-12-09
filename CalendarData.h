#pragma once
#include <vector>
#include <string>
#include "SqlController.h"
using namespace std;
//Daten des Users für den aktuellen Monat
class CalendarData{
public:
	int year;
	int month;
	int activeday;
	vector<double> worktime_start;
	vector<double> worktime_end;
	vector<int> breaktime;
	vector<bool> sickdays;
	vector<bool> vacationdays;
	vector<string> comments;
	int days();
	void makeSpace(int);
	void set_Flextime_db(int id, double flextime);
	double get_Flextime(string uname);

};
