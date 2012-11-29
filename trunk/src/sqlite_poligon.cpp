#include "sqlite/sqlite3.h"
#include "sqlite_poligon.h"
#include <assert.h>

#include <iostream>

//const char *filename = "e:/Testing/jerronimo-testing/BUILD/test/Debug/testing.db";
const char *filename = "testing.db";

void Database::openDatabase()
{
	sqlite3 *db;
	sqlite3_stmt *stmt = NULL;

	int result = sqlite3_open(filename,  &db);
	assert(result == SQLITE_OK);
	result = sqlite3_prepare_v2(db, "SELECT * FROM student",-1, &stmt, NULL);
	assert(result == SQLITE_OK);
	result= sqlite3_step(stmt);
	assert(result == SQLITE_ROW);
	const unsigned char * dupa = sqlite3_column_text(stmt,0);
	std::cout<< std::endl << dupa << std::endl;
	const unsigned char * assertTo;
	//assertTo = "myNameis";
	//assert(dupa == assertTo);
	//assert(result == SQLITE_OK);



	std::cout << "Opening database";
}

 
