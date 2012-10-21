#include "gtest/gtest.h"
#include "sqlite_poligon.h"

TEST(reality_check, test) {
  EXPECT_EQ(2+2, 4);
}

TEST(sqliteTest, openDatabase)
{
	Database db;
	db.openDatabase();
}
