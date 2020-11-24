#include "pch.h"
#include "MyMessageBoxes.h"
#include <string>


int MyMessageBoxes::DisplayMessageConnected() {
	int msgboxID = MessageBox(NULL, (LPCWSTR)L"Connected to database!", (LPCWSTR)L"Connection Details", MB_OK);
	return msgboxID;
};

int MyMessageBoxes::DisplayMessageAdded() {
	int msgboxID = MessageBox(NULL, (LPCWSTR)L"Added new User to database!", (LPCWSTR)L"Connection Details", MB_OK);
	return msgboxID;
};

int MyMessageBoxes::DisplayMessageWrongRepeatPwd() {
	int msgboxID = MessageBox(NULL, (LPCWSTR)L"Passwords are not equal :(", (LPCWSTR)L"Connection Details", MB_OK);
	return msgboxID;
};

int MyMessageBoxes::DisplayMessage(LPCTSTR mesg, LPCTSTR caption) {
	int msgboxID = MessageBox(NULL, mesg, caption, MB_OK);
	return msgboxID;
}

int MyMessageBoxes::DisplayConfirmSaveAsMessageBox()
{
	int msgboxID = MessageBox(
		NULL,
		L"temp.txt already exists.\nDo you want to replace it?",
		L"Confirm Save As",
		MB_ICONEXCLAMATION | MB_YESNO
	);

	if (msgboxID == IDYES)
	{
		// TODO: add code
	}

	return msgboxID;
}