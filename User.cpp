#pragma once
#include "pch.h"
#include "User.h"
#include "CalendarData.h"



void User::sum_wt(){
	User::duration_wt = 0;
	for (int d = 0; d < User::Monat.days();d++) {
		double buffer = User::Monat.worktime_end[d];
		buffer -= int(User::Monat.worktime_end[d]);
		buffer *= 1.666;
		User::duration_wt += (int(User::Monat.worktime_end[d])+buffer); 
		buffer = User::Monat.worktime_start[d];
		buffer -= int(User::Monat.worktime_start[d]);
		buffer *= 1.666;
		User::duration_wt -= (int(User::Monat.worktime_start[d])+buffer);
		User::duration_wt -= double(User::Monat.breaktime[d])/60;
	}
	return;
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