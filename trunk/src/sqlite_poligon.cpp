#include "sqlite/sqlite3.h"
#include "sqlite_poligon.h"
#include <assert.h>

#include <iostream>

const char *filename = DATABASE_fILE;

int Database::openDatabase()
{
	sqlite3 *db;
	sqlite3_stmt *stmt = NULL;

	int result = 0;
	result = sqlite3_open(filename,  &db);
	assert(result == SQLITE_OK);
	result = sqlite3_prepare_v2(db, "SELECT * FROM student",-1, &stmt, NULL);
	assert(result == SQLITE_OK);
	result= sqlite3_step(stmt);
	assert(result == SQLITE_ROW);
	int r = sqlite3_column_type(stmt, 2);
	assert( r  == SQLITE_INTEGER);
	const unsigned char * dupa = sqlite3_column_text(stmt,2);
	std::cout<< std::endl << dupa << std::endl;
	//char * assertTo = "myNameis";
	//assert(*dupa == *assertTo);
	//assert(result == SQLITE_OK);


	
	std::cout << "Opening database";
	return result;
}

 
