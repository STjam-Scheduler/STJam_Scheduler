#pragma once
#include "pch.h"
#include <string>
#include <time.h>
#include "CalendarData.h"

//allgemeine Daten des angemeldeten Benutzers + des aktuellen Monats
class User{

public:
	 //initialize Variables (id has to be set at login!!!)

	static int id;
	static std::string name;
	static std::string surname;
	static int role;
	static int group;
	static std::string username;
	static int notifications_sum;
	static int vacationdays_sum;
	static double flextime;
	static int sickdays_sum;
	static double duration_wt;
	static CalendarData Monat;
	static void sum_wt();
};

