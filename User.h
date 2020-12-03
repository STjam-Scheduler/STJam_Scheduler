#pragma once
#include <string>
#include <time.h>
#include "CalendarData.h"
//allgemeine Daten des angemeldeten Benutzers
class User{
public:
	static int id;
	static std::string name;
	static std::string surname;
	static int role;
	static int group;
	static std::string username;
	static int notifications_sum;
	static time_t flextime;
	static int sickdays_sum;
	static CalendarData Monat;
};

