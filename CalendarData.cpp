#include "pch.h"
#include "CalendarData.h"
#include <vector>

int CalendarData::days() {
	return this->sickdays.size();
}

//vergrößern der Vectors, später hoffentlich unnötig
void CalendarData::makeSpace(int n){
	while (this->vacationdays.size() < n ) {
		this->vacationdays.push_back(false);
		this->sickdays.push_back(false);
		this->breaktime.push_back(0);
		this->worktime_start.push_back(0);
		this->worktime_end.push_back(0);
		this->comments.push_back("-");
	}
	return;
}