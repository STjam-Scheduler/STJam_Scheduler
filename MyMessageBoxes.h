#pragma once
#include "Windows.h"
ref class MyMessageBoxes
{
public:
	int DisplayMessageConnected();
	int DisplayMessageAdded();
	int DisplayMessage(LPCTSTR mesg, LPCTSTR caption);
	int DisplayMessageWrongRepeatPwd();



	int DisplayConfirmSaveAsMessageBox();
};

