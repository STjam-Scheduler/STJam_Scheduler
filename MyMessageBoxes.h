#pragma once
#include "Windows.h"
ref class MyMessageBoxes
{
public:
	static int DisplayMessageConnected();
	static int DisplayMessageAdded();
	static int DisplayMessage(LPCTSTR mesg, LPCTSTR caption);
	static int DisplayMessageWrongRepeatPwd();



	static int DisplayConfirmSaveAsMessageBox();
};

