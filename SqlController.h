#pragma once
#include <mysql.h>
#include "MyMessageBoxes.h"
#include <string>
ref class SqlController
{
	int qstate;
	MYSQL* conn;

public:

	//Methodes
	bool SqlController::ConnectToMySql(const char* host, const char* user, const char* pwd, const char* db, unsigned int port, const char* unix_socket, unsigned long clientflag);
	bool SqlController::ConnectToMySql(const char* host, const char* user, const char* pwd, const char* db);
	void AddUser(std::string firstname, std::string surname, std::string email, std::string userName, std::string password);
	void AddWTTime(const int year,const int month,const int day,const double wt_beginn,const double wt_end,const double breakt);
	void ChangeWTTime(const int year, const int month, const int day, const double wt_beginn, const double wt_end, const double breakt);
	bool SqlController::CheckUser(std::string uname);
	bool SqlController::CheckPassword(std::string uname, std::string password);
};

