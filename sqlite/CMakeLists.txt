SET(CMAKE_CXX_FLAGS_DEBUG "/MTd /Z7")
ADD_LIBRARY( sqlite shell.c sqlite3.c sqlite3.h sqlite3ext.h )
