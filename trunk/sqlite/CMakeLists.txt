#SET(CMAKE_CXX_FLAGS_DEBUG "/MTd /Z7")
ADD_DEFINITIONS("/MTd /Z7")
ADD_LIBRARY( sqlite sqlite3.c sqlite3.h sqlite3ext.h )
