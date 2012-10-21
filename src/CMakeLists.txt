SET(CMAKE_CXX_FLAGS_DEBUG "/MTd /Z7")
ADD_LIBRARY(unresolved_symbol unresolved_symbol.cpp unresolved_symbol.h)

INCLUDE_DIRECTORIES(..)
ADD_LIBRARY(sqlite_poligon sqlite_poligon.cpp sqlite_poligon.h)
