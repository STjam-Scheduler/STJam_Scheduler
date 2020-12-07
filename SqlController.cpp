#include "pch.h"
#include "SqlController.h"
#include "WorktimeForm.h"


bool SqlController::ConnectToMySql(const char* host, const char* user, const char* pwd, const char* db, unsigned int port, const char* unix_socket, unsigned long clientflag) {
	conn = mysql_init(0);

	conn = mysql_real_connect(conn, host, user, pwd, db, port, unix_socket, clientflag);
	if (conn) {
		MyMessageBoxes::DisplayMessageConnected();
		return true;
	}
	return false;
}
bool SqlController::ConnectToMySql(const char* host, const char* user, const char* pwd, const char* db) {
	conn = mysql_init(0);
	unsigned int port = 3306;
	const char* unix_socket = NULL;
	unsigned long clientflag = 0;

	conn = mysql_real_connect(conn, host, user, pwd, db, port, unix_socket, clientflag);
	if (conn) {
		MyMessageBoxes::DisplayMessageConnected();
		return true;
	}
	return false;
}

void SqlController::AddUser(std::string name, std::string surname, int role, int group, std::string username, std::string password) {
	if (conn) {
		std::string insert_query = "INSERT INTO user_data (name, surname, role, group, uername, password) VALUES ('" + name + "', '" + surname + "', '" + char(role) + "', '" + char(group) + "', '" + username + "', ' " +password +" ')";

		const char* q = insert_query.c_str();
		
		qstate = mysql_query(conn, q);

		if (!qstate) {
			MyMessageBoxes::DisplayMessageAdded();
		}
	}
}

bool SqlController::CheckUser(std::string uname) {

	std::string name = "0";
	if (conn) {


		std::string insert_query = "SELECT COUNT(1) FROM user WHERE username = \"" + uname + "\"";
		const char* q = insert_query.c_str();

		if (mysql_query(conn, q)) {
			return true;
		}else{

			MYSQL_RES* result = mysql_store_result(conn);
			int num_fields = mysql_num_fields(result);
			MYSQL_ROW row;

			while ((row = mysql_fetch_row(result)))
			{
				for (int i = 0; i < num_fields; i++)
				{
					name = row[i];
				}

				mysql_free_result(result);
				//mysql_close(conn);
			}

			if (name.compare("1")) {
				return true;
			}
			else {
				return false; //User existiert
			}
		}
		return true;
	}
	return true;
}

bool SqlController::CheckPassword(std::string uname, std::string password) {
	std::string pw = "0";
	if (conn) {

		std::string insert_query = "SELECT password FROM user WHERE username = \"" + uname + "\"";
		const char* q = insert_query.c_str();

		if (mysql_query(conn, q)) {
			return true;
		}
		else {

			MYSQL_RES* result = mysql_store_result(conn);
			int num_fields = mysql_num_fields(result);
			MYSQL_ROW row;

		while ((row = mysql_fetch_row(result)))
		{
			for (int i = 0; i < num_fields; i++)
			{
				pw = row[i];
			}

			mysql_free_result(result);
			//mysql_close(conn);
		}

		if (pw.compare(password)) {
			return true;
		}
		else {
			return false;  //password korrekt
		}
	}
	return true;
}
return true;
}

bool SqlController::CheckMonth(int monthid, int calendarid) //prüft ob monat initialisiert wurde
{
	std::string month= std::to_string(monthid);
	std::string calendar = std::to_string(monthid);

	std::string erg = 0;
	if (conn) {

		std::string query = "SELECT COUNT(1) FROM month WHERE idmonth = \"" + month + "\"" + " AND calendar_idcalendar = \"" + calendar + "\"";
		const char* q = query.c_str();


		MYSQL_RES* result = mysql_store_result(conn);
		int num_fields = mysql_num_fields(result);
		MYSQL_ROW row;

		while ((row = mysql_fetch_row(result)))
		{
			for (int i = 0; i < num_fields; i++)
			{
				erg = row[i];
			}

			mysql_free_result(result);
			//mysql_close(conn);
		}

		if (erg.compare("1")) {
			return false;		//monat existiert nicht
		}
		else {
			return true;		//monat existiert
		}

	}
	return false;
}

void SqlController::AddWTTime( int id,  int year,  int month,  int day,  double wt_beginn,  double wt_end,  double breakt,  double sum_wt)
{
	if (conn) {
		/*std::string insert_query = "INSERT INTO day (idday,start_wt,end_wt,breaktime,sum_wt,month_idmonth) VALUES ('" + char(day) + "','" + char(wt_beginn) + "','" + char(wt_end) + "','" + char(breakt) + "','" + char(sum_wt) + "','" + char(month) + "')";

		const char* q = insert_query.c_str();

		qstate = mysql_query(conn, q);

		if (!qstate) {
			MyMessageBoxes::DisplayMessageAdded();
	
	}*/
	}
	
}

void SqlController::ChangeWTTime(const int year, const int month, const int day, const double wt_beginn, const double wt_end, const double breakt)
{
	
}
//TOM:: selct month ob da steffen ; monat einfügen