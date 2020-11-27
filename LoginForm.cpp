#include "pch.h"
#include "LoginForm.h"
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace Window;

bool LoginForm::CheckInput() {
	msclr::interop::marshal_context context;
	std::string uname = context.marshal_as<std::string>(UNameBox->Text);
	std::string password = context.marshal_as<std::string>(PwBox->Text);
	int id = -1;
	//change id if user exists
	if (uname.compare("test")) {
		DebugLabel->Text = "Username does not exist.";
		return false;
		}
	else if(password.compare("test")) {
		DebugLabel->Text = "Wrong Password.";
		return false;
		}
	else
		//grabdata
		DebugLabel->Text = "Success!";
	return true;
}