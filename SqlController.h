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
	static void AddWTTime(const int year,const int month,const int day,const double wt_beginn,const double wt_end,const double breakt);
	static void ChangeWTTime(const int year, const int month, const int day, const double wt_beginn, const double wt_end, const double breakt);
};

