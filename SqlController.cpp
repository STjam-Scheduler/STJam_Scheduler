#include "pch.h"
#include "SqlController.h"



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
