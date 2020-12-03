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

void SqlController::AddUser(std::string firstname, std::string surname, std::string email, std::string userName, std::string password) {
	if (conn) {
		std::string insert_query = "INSERT INTO user_data (firstname, surname, email, u_name, pwd) VALUES ('" + firstname + "', '" + surname + "', '" + email + "', '" + userName + "', '" + password + "')";

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
				return false;
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

void SqlController::AddWTTime(const int year, const int month, const int day, const double wt_beginn, const double wt_end, const double breakt)
{
}

void SqlController::ChangeWTTime(const int year, const int month, const int day, const double wt_beginn, const double wt_end, const double breakt)
{
	
}
