#pragma once
#include <mysql.h>
#include "MyMessageBoxes.h"
#include <string>
#include <sstream>
ref class SqlController
{
	static int qstate;
	static MYSQL* conn;

public:

	//Methodes
	static bool SqlController::ConnectToMySql(const char* host, const char* user, const char* pwd, const char* db, unsigned int port, const char* unix_socket, unsigned long clientflag);
	static bool SqlController::ConnectToMySql(const char* host, const char* user, const char* pwd, const char* db);
	static void AddUser(std::string name, std::string surname, int role, int group, std::string username, std::string password);
	static void AddWTTime(const int id, const int year,const int month,const int day,const double wt_beginn,const double wt_end,const double breakt, const double sum_wt);
	static void ChangeWTTime(const int year, const int month, const int day, const double wt_beginn, const double wt_end, const double breakt);
	static bool SqlController::CheckUser(std::string uname);
	static bool SqlController::CheckPassword(std::string uname, std::string password);
	static bool SqlController::CheckMonth(int monthid, int calendarid);
	static void AddMonth(int monthid, int calendarid);

	static int getSickdays_sum(std::string name);
	static void setSickdays_sum(int, int sum_sick);
};

