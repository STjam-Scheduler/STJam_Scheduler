#pragma once
#include "pch.h"
#include "CalendarForm.h"
#include "User.h"

using namespace Window;

void CalendarForm::initData(){

	Flextime->Text = User::flextime.ToString();
	Worktime->Text = User::duration_wt.ToString();
	Vacationdays->Text = User::vacationdays_sum.ToString();
	//yLabel->Text=now?

}
