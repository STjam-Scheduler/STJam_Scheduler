#pragma once
#include <mysql.h>
#include "MyMessageBoxes.h"
#include <string>
ref class SqlController
{
	static int qstate;
	static MYSQL* conn;

public:

	//Methodes
	static bool SqlController::ConnectToMySql(const char* host, const char* user, const char* pwd, const char* db, unsigned int port, const char* unix_socket, unsigned long clientflag);
	static bool SqlController::ConnectToMySql(const char* host, const char* user, const char* pwd, const char* db);
	static void AddUser(std::string firstname, std::string surname, std::string email, std::string userName, std::string password);
	static bool SqlController::CheckUser(std::string uname);
	static bool SqlController::CheckPassword(std::string uname, std::string password);
};

