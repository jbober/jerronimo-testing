cmake_minimum_required(VERSION 2.6)

SET(GMOCK gmock-1.6.0)
SET(CMAKE_CXX_FLAGS_DEBUG "/MTd /Z7")

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR})
INCLUDE_DIRECTORIES(${GMOCK}/include)
INCLUDE_DIRECTORIES(${GMOCK}/gtest/include)
add_definitions(-DDATABASE_fILE="${PROJECT_SOURCE_DIR}/testing.db")
ADD_SUBDIRECTORY(${GMOCK})
ADD_SUBDIRECTORY(src)
ADD_SUBDIRECTORY(test)
ADD_SUBDIRECTORY(sqlite)


ENABLE_TESTING()

#/FORCE:UNRESOLVED

#file(MAKE_DIRECTORY ${PROJECT_BINARY_DIR}/test)
#set(TESTNAMES example)


#add_executable(asdf test/example.cpp )
#target_link_libraries(asdf gmock_main)

#foreach(testname ${TESTNAMES})
	#add_executable(${testname}.test test/example.cpp)
	#target_link_libraries(${testname}.test gmock_main)
	#add_test(${testname} ${testname}.test)
	#endforeach(testname)


