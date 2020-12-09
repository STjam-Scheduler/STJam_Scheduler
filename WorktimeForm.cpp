#include "pch.h"
#include "WorktimeForm.h"
#include "User.h"

#include <string>
#include <msclr\marshal_cppstd.h>


using namespace std;

bool Window::WorktimeForm::CheckInput() {
	try {
		msclr::interop::marshal_context context;

		wtBegin = stod(context.marshal_as<string>(wt_beginn_t->Text)); //reinmachen falsche Eingabe
		wtEnd = stod(context.marshal_as<string>(wt_end_t->Text));

		if (wtBegin >= 24 || wtEnd >= 24) {
			wtBegin = 0;
			wtEnd = 0;
			showErro("illogical time");
			return false;
		}
		
		calc_break();
		return true;
	}
	catch (exception e) {
		return false;
		showErro("Please enter only Numbers");
	}
}
bool Window::WorktimeForm::CheckBreak() {
	try {
		msclr::interop::marshal_context context;
		double a=0;
		a = stod(context.marshal_as<string>(breaktime->Text));
		
		breakt = a;
		return true;
	}
	catch (exception e) {
		return false;
	
	}
}

void Window::WorktimeForm::calc_break()
{
	sum_Time = wtEnd - wtBegin;
	if (sum_Time < 0) {
		sum_Time = (24 - wtBegin) + wtEnd;
	}
	
	if (sum_Time >= 6) {
		if (sum_Time < 9) {
			breaktime->ResetText();
			breaktime->AppendText("30");
			breakt = 30;
		}
		else {
			breaktime->ResetText();
			breaktime->AppendText("45");
			breakt = 45;
		}

	}
}

void Window::WorktimeForm::calc_flex() {

double time_m = (sum_Time * 60) - breakt;
time_m /= 60;
double min = (time_m - int(time_m))*0.60  ;
sum_Time = int(time_m) + min;
	
	
	if (sum_Time>8) {
		sum_Flex = sum_Time - 8;
		sum_Time =8;
	}

}


/*string Window::WorktimeForm::readText(&TextBox T)
{
	
	msclr::interop::marshal_context context;
	return context.marshal_as<std::string>(T->Text);
	
}
*/


void Window::WorktimeForm::showErro(System::String ^s)
{
	erro->ResetText();
	erro->AppendText(s);
}
