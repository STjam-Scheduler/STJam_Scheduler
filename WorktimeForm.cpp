#include "pch.h"
#include "WorktimeForm.h"

#include <string>
#include <msclr\marshal_cppstd.h>

using namespace std;

bool Window::WorktimeForm::CheckInput() {
	try {
		msclr::interop::marshal_context context;

		wtBegin = stod(context.marshal_as<string>(wt_beginn_t->Text)); //reinmachen falsche Eingabe
		wtEnd = stod(context.marshal_as<string>(wt_end_t->Text));
		
		calc_break();
		return true;
	}
	catch (exception e) {
		return false;
	}
}
bool Window::WorktimeForm::CheckBreak() {
	try {
		msclr::interop::marshal_context context;
		breakt = stod(context.marshal_as<string>(breaktime->Text));
		return true;
	}
	catch (exception e) {
		return false;
	
	}
}

void Window::WorktimeForm::calc_break()
{
	double sumTime = 0;
	sumTime = wtEnd - wtBegin;
	if (sumTime < 0) {
		sumTime = (24 - wtBegin) + wtEnd;
	}
	if (sumTime >= 6) {
		if (sumTime < 9) {
			breaktime->ResetText();
			breaktime->AppendText("30");
		}
		else {
			breaktime->ResetText();
			breaktime->AppendText("45");
		}

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