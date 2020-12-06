#pragma once
#include "pch.h"
#include "User.h"
#include "CalendarData.h"



int User::sum_wt(){
	this->duration_wt = 0;
	for (int d = 0; d < this->Monat.days();d++) {
		this->duration_wt += (this->Monat.worktime_start[d]-this->Monat.worktime_end[d]);
	}
	return 0;
}

int User::id=0;
std::string User::name="";
std::string User::surname="";
int User::role=0;
int User::group=0;
std::string User::username="";
int User::notifications_sum=0;
int User::vacationdays_sum=0;
double User::flextime = 0;
int User::sickdays_sum=0;
double User::duration_wt=0;
CalendarData User::Monat;