#include "pch.h"
#include "SqlController.h"

using namespace System;

//int main(array<System::String ^> ^args)
//{
//    return 0;
//}

#include "Form1.h"

using namespace System::Windows::Forms;

[STAThread]
int main() {
	SqlController::ConnectToMySql("localhost", "root", "plz insert your password for root here", "insert your database name here"); //-> 1.) Selbst gewaehltes Pwd fuer den root acc der eigenen lokalen Datenbank an entsprechender Stelle einsetzen
																																	//-> 2.) Selbst gewaehlte Datenbank an entsprechender Stelle einsetzen
																																	//-> 3.) Ausfuehren: bei erfolgreicher Verbindung sollte eine Message Box erscheinen
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLRWinformsProjekt::Form1()); 
	return 0;
}