#include "pch.h"
#include "LoginForm.h"
#include "SqlController.h"
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace Window;

bool LoginForm::CheckInput() {
	msclr::interop::marshal_context context;
	std::string uname = context.marshal_as<std::string>(UNameBox->Text);
	std::string password = context.marshal_as<std::string>(PwBox->Text);
	int id = -1;
	//change id if user exists
	if (SqlController::CheckUser(uname)) {
		DebugLabel->Text = "Username does not exist.";
		return false;
		}
	else if(SqlController::CheckPassword(uname,password)) {
		DebugLabel->Text = "Wrong Password.";
		return false;
		}
	
		//grabdata
	DebugLabel->Text = "Success!";
	return true;
}
