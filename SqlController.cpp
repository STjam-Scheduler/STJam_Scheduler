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
	std::string role_s = std::to_string(role);
	if (conn) {
		std::string insert_query = "INSERT INTO user (name, surname, role, username, password) VALUES ('" + name + "', '" + surname + "', '" + role_s + "', '"  + username + "','" +password + "')";
		const char* q = insert_query.c_str();
		if (mysql_query(conn, q)==0) {
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

void SqlController::AddMonth(int monthid, int calendarid)
{
	throw gcnew System::NotImplementedException();
}

int SqlController::getSickdays_sum(std::string name)
{
	if (conn) {

		std::string insert_query = "SELECT sickdays FROM calendar Join user On user.idusers = calendar.users_idusers WHERE username = \"" + name + "\"";
		const char* q = insert_query.c_str();
		std::string erg = "0";
		if (mysql_query(conn, q)) {
			
		}
		else {

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

			
		}
		std::stringstream sstr(erg);
		int Zahl;
		sstr >> Zahl;
		return Zahl;
	}
	
}

void SqlController::setSickdays_sum(int id,int sum_sick)
{
	string sick = to_string(sum_sick);
	string id_s = to_string(id);
	if (conn) {
		std::string insert_query = "UPDATE calendar SET sickdays = '"+sick+"' WHERE users_idusers = "+id_s;

		const char* q = insert_query.c_str();

		qstate = mysql_query(conn, q);

		if (!qstate) {
			//MyMessageBoxes::DisplayMessageAdded();
		}
	}
}


void SqlController::setFlextime(int id, double flextime) //speichert flextime ind db im format HH.MM oder H.MM
{
	
	std::string flex = to_string(flextime);
	string id_s = to_string(id);
	std::size_t pos = flex.find(".");	
	flex.replace(pos, 1, ":");
	string input = flex.substr(0,pos+3);


	if (conn) {
		std::string insert_query = "UPDATE calendar SET flextime = '" + input + "' WHERE users_idusers = " + id_s;

		const char* q = insert_query.c_str();

		qstate = mysql_query(conn, q);

		if (!qstate) {
			//MyMessageBoxes::DisplayMessageAdded();
		}
	}
}

int SqlController::getFLextime_sum(std::string name) {
	if(conn) {

		std::string insert_query = "SELECT flextime FROM calendar Join user On user.idusers = calendar.users_idusers WHERE username = \"" + name + "\"";
		const char* q = insert_query.c_str(); 
		std::string erg = "0";
		if (mysql_query(conn, q)) {

		}
		else {

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


		}
		string output = erg.substr(0, 5);
		std::size_t pos = output.find(":");
		output.replace(pos, 1, ".");
		double Zahl = std::stod(output);
		return Zahl;
	}

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
